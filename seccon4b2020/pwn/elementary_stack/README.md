# Elementary Stack  
Pwn 429pts 18solves  

## point  
- OOB(local var)  
- GOT overwrite  
- FSA  

## comment  
- bufferポインタを書き換える際に直接got[atol]に向けると次の呼び出しで死ぬため注意  
- atolをprintfにした上で引数も操作できるため、FSAでlibcbase leakできる  

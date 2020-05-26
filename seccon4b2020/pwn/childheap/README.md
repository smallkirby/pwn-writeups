# ChildHeap  
Pwn 473pts 7solves  

## point  
- libc2.29のため、double-freeは(普通には)無理  
- chunkを同時にひとつしか保持できない  
- NULL overflow  
- overlapped chunk  
- back consolidation

## comment  
- double-freeができない事以外は普通のheap問  
- ただなんかlibc symbolのアドレスがなんか変な感じになって時間を食った  


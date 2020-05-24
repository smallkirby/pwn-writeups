# flip  
Pwn 491pts 3solves  

## point  
- GOT overwrite (setbuf->puts)
- relative overwrite  

## comment  
- __stack_chk_failとexitのGOTを上手く使い、mainの無限ループとstartの無限ループを使い分ける(setbufが呼ばれるかどうか)  
- flip操作は自動化しないと頭がいかれて死ぬ  
- 途中までは運が必要だが、そこを突破するとエントロピー0  


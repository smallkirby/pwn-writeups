# \32\64  

途中でRSPが32bitになるから、mprotect()で.bssセクションをexecutableにし、push/popを使わないシェルコードをおいて終了。

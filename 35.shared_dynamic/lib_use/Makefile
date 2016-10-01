all:
	gcc testlib.c -o testlib -lrston -L.
	
	#方法1使用动态链接库
	#sudo cp librston.so /usr/lib/
	#sudo rm -f /usr/lib/librston.so 
	
	#方法2使用动态链接库
	#注意Makefile中的export和shell中的export作用不同
	#参考链接http://blog.csdn.net/sdustliyang/article/details/6959715
	#export LD_LIBRARY_PATH=$D_LIBRARY_PATH:$(shell pwd) && ./testlib
	#export LD_LIBRARY_PATH= && ./testlib
	
	ldd testlib
	
	 
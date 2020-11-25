#include<stdio.h>
#include<windows.h>
void main(){
	int i=1;
	printf("欢迎使用cool秒表计数器\n");
	while(1){
		Sleep(1000);
		printf("现在是第%d秒\n",i);
		i++;
	}

}

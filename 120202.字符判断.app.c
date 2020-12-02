#include<stdio.h>
void main(){
char i;
printf("欢迎使用胡搞字符判断\n");
scanf("%c",&i);
printf("你在点击:");
switch(i){
	case 'w':printf("上键\n");break;
	case 'a':printf("左键\n");break;
	case 's':printf("下键\n");break;
	case 'd':printf("右键\n");break;
	default:printf("请输入w,a,s,d\n");
}
}

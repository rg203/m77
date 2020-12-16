#include<stdio.h>
int lebron(int x){
	if(x<=0){
	return 0;
	}
	return x+lebron(x-1);
}
void main(){
int a;
printf("请输入一个数值，我们将从零开始求和\n");
scanf("%d",&a);
printf("%d\n",lebron(a));
}

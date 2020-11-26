#include<stdio.h>
void main()
{
int a,b,c,t;
printf("降序程序\n");
printf("tip:用户输入比较数值时中间需要逗号隔开\n");
scanf("%d,%d,%d,",&a,&b,&c);//用户输入比较数值时中间需要逗号隔开
if(a<b)
{
	t=a;
	a=b;
	b=t;
}
if(a<c){
t=a;
a=c;
c=t;
}
if(b<c){
t=b;
b=c;
c=t;
}
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
}

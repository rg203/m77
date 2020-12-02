#include<stdio.h>
void main(){
int a,b,c,d;
printf("请输入秒数\n");
scanf("%d",&a);
	b=a/3600;
	c=(a%3600)/60;
	d=a-(b*3600)-(c*60);

	printf("%d:",b);
	printf("%d:",c);
	printf("%d:",d);

}

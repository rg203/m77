#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
if(n>=-100000 && n<=-1){
printf("你还有花呗没还，无法使用该程序\n");}
else if(n>=0 && n<=500){
printf("赤贫\n");}
else if(n>=1501 && n<=3000){
printf("普通打工人\n");}
else if(n>=3001 && n<=5000){
	printf("普通清洁工\n");}
else if(n>=5001 && n<=12000){
printf("水电工工资\n");}
}

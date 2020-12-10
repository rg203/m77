#include<stdio.h>
#include<string.h>
void main(){
char a1[]="春节";
char a2[]="端午节";
char a3[]="中秋节";
char a4[]="元宵节";
char a5[50]="";
printf("吃货的日程总是被安排的明明白白，请问现在是什么节？\n");
scanf("%s",a5);
if(strcmp(a1,a5)==0){
printf("给我安排饺子");
}
else if(strcmp(a2,a5)==0){
printf("给我安排粽子");
}
else if(strcmp(a3,a5)==0){
printf("给我安排月饼");
}
else if(strcmp(a3,a5)==0){
printf("给我安排元宵");
}
else {
printf("绝食");
}
}

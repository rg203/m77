#include<stdio.h>
void main(){
int i,a;
int array2[2][3]={
	{1,4,7},
	{2,5,8}
};

for(i=0;i<2;i++){

for(a=0;a<3;a++){
	printf("%d ",array2[i][a]);}
printf("\n");}
}

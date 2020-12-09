#include<stdio.h>
void main(){
 int a,b,i=0;
 int array[19][20];
 for(a=0;a<=18;a++){
	 for(b=0;b<=19;b++){
		 i++;
		 array[a][b]=i;
		 printf("%d,",array[a][b]);
	 }
	  printf("\n");
 }

}

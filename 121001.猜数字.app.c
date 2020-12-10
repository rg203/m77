#include<stdio.h>
#include<string.h>
void main(){
 int i,key=5;
 char a1[20]="";
 char a2[]="帮我回到香港";
	printf("“想玩儿游戏吗，先回答暗号下一句是什么？微信转账三百块，___________。”\n");
	scanf("%s",a1);
 if( strcmp(a1,a2) == 0 ){
	  printf("身份验证成功，您是陈冠希本人，您已成功进入程序，接下来请猜出正确的数字\n");
	while(1){
	  scanf("%d",&i);
	 if(i==key){
		printf("猜对啦，陈冠希先生\n");break;
	 }
	 else if(i>key){
		printf("你猜的太大了，冠希哥,再猜一次啦\n");
	 }
	 else if(i<key){
		printf("你猜的太小了，凉介,再试试啦\n");
	 }
	}
 }
else{
	printf("暗号错误，你不是陈冠希，请重新输入\n");
}
}

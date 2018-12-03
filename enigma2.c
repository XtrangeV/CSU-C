#include <stdio.h>
#include <string.h>
#define N 26
char *password1="QAZWSXEDCRFVTGBYHNUJMIKOLP",*ref="ZYXWVUTSRQPONMLKJIHGFEDCBA";
char reflect[N+1]="ZYXWVUTSRQPONMLKJIHGFEDCBA",zimu[N+1]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void change01(char *middle,int len,int miyao); 
void reflect0(char *middle,int len,int miyao);
int main(void)
{
	char chuan[150],middle[150];
	int i,len,miyao;
	
	scanf("%d",&miyao);
	scanf("%s",chuan);
	strcpy(middle,chuan);
	len=strlen(middle);
	change01(middle,len,miyao);
	reflect0(middle,len,miyao);
	
	printf("%s",middle);
	return 0;
 } 
 
 void change01(char *middle,int len,int miyao)
 {  
    char zhuanzi1[N+1];
 	int i,j,k,temp;
 	strcpy(zhuanzi1,password1);
 	
 	for(i=1;i<miyao;i++)
 	{   temp=zhuanzi1[0];                     //转动转子到初始格 
 		for(k=0;k<N-1;k++)
 		zhuanzi1[k]=zhuanzi1[k+1];
		 
		zhuanzi1[k]=temp;
	 }
	 
 	/*这个循环用来转换字符，并且将转子旋转*/ 
 	for(i=0;i<len;i++){
 		for(j=0;middle[i]!=zimu[j];j++);      //找出字母在字母表中的位置 
 		middle[i]=zhuanzi1[j];
        
 		
 		temp=zhuanzi1[0];                     //转动转子 
 		for(k=0;k<N-1;k++){
 			zhuanzi1[k]=zhuanzi1[k+1];
		 }
		 zhuanzi1[k]=temp;
	 }
	 
 }
 void reflect0(char *middle,int len,int miyao)
 {
 	char zhuanzi1[N+1];
 	int i,j,k,temp;
 	
 	strcpy(zhuanzi1,password1);
 	
 	for(i=1;i<miyao;i++)
 	{   temp=zhuanzi1[0];                     //转动转子到初始格 
 		for(k=0;k<N-1;k++)
 		zhuanzi1[k]=zhuanzi1[k+1];
		 
		zhuanzi1[k]=temp;
	 }
	 
	for(i=0;i<len;i++){
		for(j=0;middle[i]!=reflect[j];j++)       //找出字母在反射板的位置 
 		;
 		middle[i]=zimu[j];
		
		for(k=0;middle[i]!=zhuanzi1[k];k++)      //返回经过转子1 
 		;
 		middle[i]=zimu[k] ;
		 
		temp=zhuanzi1[0];                     //转动转子 
 		for(k=0;k<N-1;k++){
 			zhuanzi1[k]=zhuanzi1[k+1];
		 }
		 zhuanzi1[k]=temp; 	
	} 
	
 }

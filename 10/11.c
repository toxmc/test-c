#include<stdio.h>
main(){
	enum body{a,b,c,d}month[31],j;
	int i;
 	j=a;
	for(i=1;i<=30;i++){
		month[i]=j;
		j++;
		if(j>d)j=a;
	}
	for(i=1;i<=30;i++){
		switch(month[i]){
			case a:printf("%2d %c\t",i,'a');
			case b:printf("%2d %c\t",i,'b');
			case c:printf("%2d %c\t",i,'c');
			case d:printf("%2d %c\t",i,'d');
			default:break;
		}
	}
	printf("\n");
}

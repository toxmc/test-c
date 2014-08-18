#include<stdio.h>
#include<stdlib.h>
main(){
	FILE *fp;
	char ch;
	if((fp=fopen("text.txt","rt"))==NULL){
		printf("|nCannot open file strike any exit!");
		getchar();
		exit(1);
	}
	ch=fgetc(fp);
	while(ch!=EOF){
		putchar(ch);
		ch=fgetc(fp);	
	}
	fclose(fp);
}

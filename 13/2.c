#include<stdio.h>
#include<stdlib.h>
main(){
	FILE *fp;
	char ch;
	if((fp=fopen("text.txt","wt+"))==NULL){
		printf("Cannot open file and enter any key exit!");
		getchar();
		exit(1);
	}
	printf("input a string:\n");
	ch=getchar();
	while(ch!='\n'){
		fputc(ch,fp);
		ch=getchar();	
	}
	rewind(fp);
	ch=fgetc(fp);
	while(ch!=EOF){
		putchar(ch);
		ch=fgetc(fp);
	}
	printf("\n");
	fclose(fp);
}

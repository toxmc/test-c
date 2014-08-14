#include <stdio.h>
int main(int argc,char *argv[]){
printf("参数共有：%d\n",argc);
		printf("%d\n",*argv);
		printf("%s\n",argv[1]);
	for(int i=0;i<argc;i++){
		printf("%s\n",argv[i]);	
	}
	
while(argc-->1){
	printf("%s\n",*++argv);
	}
}

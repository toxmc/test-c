#include<stdio.h>
#define NUM 3
struct mem{
	char name[20];
	char phone[11];
};
main(){
	struct mem man[NUM];
	int i;
	for(i=0;i<NUM;i++){
		printf("input name\n");
		scanf("%s",&man[i].name);
		printf("input phone\n");
		scanf("%s",&man[i].phone);
	}
	printf("name\t\t\tphone\n\n");
	for(i=0;i<NUM;i++){
		printf("%s\t\t\t%s\n",man[i].name,man[i].phone);
	}

}

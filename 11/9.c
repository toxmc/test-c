#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

#define TYPE struct stu
#define LEN sizeof(struct stu)
TYPE *creat(int n);
void main(){
	creat(2);
}
struct stu{
	int num;
	int age;
	struct stu *next;
};

TYPE *creat(int n){
	struct stu *head,*pf,*pb;
	int i;
	for(i=0;i<n;i++){
		pb=(TYPE*)malloc(LEN);
		printf("input Number add Age\n");
		scanf("%d %d",&pb->num,&pb->age);
		if(i==0)pf=head=pb;
		else pf->next=pb;
		pb->next=0;
		pf=pb;
		printf("number:%d,Age=%d",pb->num,pb->age);
	}

	return(head);
}


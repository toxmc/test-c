#include<stdio.h>
#include<string.h>
#include<stdlib.h>
	struct stu{
		int num;
		char * name;
		char sex;
		float score;
	}boy1,*pstu;
main(){
	char tempname[100];
	printf("input num,name,sex,score\n");
	scanf("%d\n%s\n%c\n%f",&boy1.num,&tempname,&boy1.sex,&boy1.score);
	boy1.name=malloc(sizeof(char[strlen(tempname)+1]));
	strcpy(boy1.name,tempname);
	pstu=&boy1;
		
	printf("-----------boy1.xxx---------------\n");
	printf("Number=%d\nName=%s\n",boy1.num,boy1.name);
	printf("sex=%c\nScore=%f\n",boy1.sex,boy1.score);
	printf("-----------(*pstu).xxx---------------\n");
	printf("Number=%d\nName=%s\n",(*pstu).num,(*pstu).name);
	printf("sex=%c\nScore=%f\n",(*pstu).sex,(*pstu).score);
	printf("-----------pstu->xxx---------------\n");
	printf("Number=%d\nName=%s\n",pstu->num,pstu->name);
	printf("sex=%c\nScore=%f\n",pstu->sex,pstu->score);
}

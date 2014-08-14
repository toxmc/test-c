#include<stdio.h>
#include<stdlib.h>
main(){
	struct stu{
		int num;
		char *name;
		char sex;
		float score;
	} *ps;
	ps=(struct stu*)malloc(sizeof(struct stu));
	ps->num=102;
	ps->name="xmc";
	ps->sex='f';
	ps->score=66.6;
	printf("Num=%d;Name=%s;Sex=%c;score=%0.2f\n",ps->num,ps->name,ps->sex,ps->score);
	free(ps);
	printf("Num=%d;Name=%s;Sex=%c;score=%0.2f\n",ps->num,ps->name,ps->sex,ps->score);
}

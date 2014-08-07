#include<stdio.h>
main(){
	struct stu{
		int num;
		char *name;
		char sex;
		float score;
	}boy1,boy2;
	boy1.num=102;
	boy1.name="xmc";
	printf("input sex and score\n");
	scanf("%c,%f",&boy1.sex,&boy1.score);
	boy2=boy1;
	printf("Number=%d,Name=%s,Sex=%c,Score=%f\n",boy1.num,boy1.name,boy1.sex,boy1.score);
	printf("Number=%d,Name=%s,Sex=%c,Score=%f",boy2.num,boy2.name,boy2.sex,boy2.score);
}

#include<stdio.h>
main(){
	struct stu{
		int num;
		char *name;
		char sex;
		float score;
	}boy1,boy2={102,"xmc",'F',99.5};
boy1=boy2;
printf("Number=%d,Name=%s,Sex=%c,Score=%f\n",boy1.num,boy1.name,boy1.sex,boy1.score);
printf("Number=%d,Name=%s,Sex=%c,Score=%0.2f\n",boy2.num,boy2.name,boy2.sex,boy2.score);
}

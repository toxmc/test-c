#include<stdio.h>
main(){
	struct str{
		int num;
		char *name;
		char sex;
		float score;
	}boy[4]={
		{101,"aaa",'F',60},
		{102,"bbb",'M',70},
		{103,"ccc",'F',80},
		{104,"ddd",'M',90}
	};
	int i,c=0;
	float ave,s=0;
	for(i=0;i<4;i++){
		s+=boy[i].score;
		if(boy[i].score<60){
			c++;
		}
	}
	printf("s=%f\n",s);
	printf("ave=%0.2f\n",s/4);
	printf("不及格人数：%d\n",c);
}

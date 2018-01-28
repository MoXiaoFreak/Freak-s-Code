#include <stdio.h>
#define FILENAME "A.txt"
#define OPEN_R pFile=fopen(FILENAME,"r")
#define OPEN_W pFile=fopen(FILENAME,"w")
#define CLOSE fclose(pFile)
struct StudentType
{
	int num;
	char name[18];
	int score[3];
};
void addMember(StudentType *student1, int a, StudentType *student2);
void addMember(StudentType *student1, int a,StudentType *student2)
{
	*(student1+a)=*student2;
}
void delMember(StudentType *student1, int a);
void delMember(StudentType *student1, int a)
{
	for (int i = a; i<2; i++)
		*(student1+i) = *(student1 + i+1);
}
int main()
{
	StudentType student1[100] =
	{ 
		{ 1,"dad",{12,13,14}},
		{ 2,"bab",{15,16,17}},
		{ 3,"ccc",{18,19,20}}
	};
	StudentType student2[1]=
	{
		{ 4,"add",{ 21,22,23 } }
	};
	delMember(student1,2);
	for (int i = 0; i < 2; i++)
		for (int j= 0; j < 3; j++)
			printf("%d,%d\n", student1[i].num, student1[i].score[j]);
	printf("\n");
	addMember(student1, 3, student2);
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			printf("%d,%d\n", student1[i].num, student1[i].score[j]);
//file
	FILE *pFile;
	OPEN_W;
	CLOSE;

	OPEN_R;
	CLOSE;


	return 0;
}



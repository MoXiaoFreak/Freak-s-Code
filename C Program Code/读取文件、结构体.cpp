#include <stdio.h>
#define TEXTFILE "A.txt"
#define OPEN_R  fopen(TEXTFILE, "r")
#define OPEN_W  fopen(TEXTFILE, "w")
struct StudentType
{
	int num;
	char name[18];
	char sex[3];
	int age;
};
int main()
{
	StudentType student = { 1,"dad",'a',12 };
	FILE *pFile;
	pFile = OPEN_W;
	fwrite(&student, sizeof(StudentType), 1, pFile);
	fclose(pFile);

	pFile = OPEN_R;
	fread(&student, sizeof(StudentType),1, pFile);
	printf("%s %d",student.name,student.num);
	fclose(pFile);
	return 0;
}
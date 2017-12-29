#include  <stdio.h>
void average(float *p, int n);
void printScore(float (*p)[4], int n);
void searchPrint(float (*p)[4], int n);
void average(float *p, int n)
{
	int i;
	float s = 0;
	for (i = 0;i <n;i++)
			s =s+*(p++);
	printf("%f  ",s/12);
	printf("\n");
}
void printScore(float(*p)[4], int n)
{
	int i;
	for(i=0;i<4;i++)
	      printf("%.1f  ", *(*(p+n-1)+i));
	printf("\n");
}
void searchPrint(float(*p)[4], int n)
{
	int t = 100, i, j;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < 4;j++)
		{
			if (*(*(p + i) + j) < 60)
			{
				t = n;
			}
		}
			if (t != 100)
			{
			for (int k = 0;k<4;k++)
				printf("%.1f  ", *(*(p + t-1) + k));
			}
    }
		 
}
	int main()
	{
		float score[3][4] =
		{
			{65,67,70,60},
			{80,67,90,81},
			{90,99,100,98}
		};
		average(*score, 12);
		printScore(score,2);
		searchPrint(score,3);
		return 0;
	}

#include <stdio.h>
int main()
{
	float x, y, c;
	printf("Please input x:\n");
	scanf("%f",&x);
	printf("Please input y:\n");
	scanf("%f", &y);

	c = x > y ? x : y;
	printf("Max of (%f,%f) is %f",x,y,c);
	return 0;
}
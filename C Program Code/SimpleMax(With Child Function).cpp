#include <stdio.h>
float max(float x, float y);
float max(float x, float y)
{
	/*       if (x > y)
	return x;
	else
	return y;
	*/
	return x > y ? x : y;
}
int main()
{
	float x, y, c;
	printf("Please input x:\n");
	scanf("%f", &x);
	printf("Please input y:\n");
	scanf("%f", &y);
	c = max(x, y);
	printf("Max of (%f,%f) is %f\n", x, y, c);
	return 0;
}
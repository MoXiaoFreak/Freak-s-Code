#include <stdio.h>
float Max(float x, float y);
float Max(float x, float y)
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
	c = Max(x, y);
	printf("Max of (%f,%f) is %f\n", x, y, c);
	return 0;
}
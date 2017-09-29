#include <stdio.h>
int main()
{
	int x, y, m;

	printf("Please input x:\n");
	scanf("%d",&x);
	printf("Please input y:\n");
	scanf("%d", &y);

	m = x*y;
	printf("%d*%d=%d\n",x,y,m);

	return 0;
}
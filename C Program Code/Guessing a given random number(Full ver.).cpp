#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define GUESSTIMESLIMIT 8
int main()
{
	int random,playtime = 0, completetime = 0, losetime = 0;
	char i = 'Y';
	float winrate;
	while (i == 'Y')
	{
		srand(time(0));
		random = rand() % 101;
		int input, count = 1;
		printf("There is a real random number.Please input a 0-100 number(an integer) to guess it:\n");
		scanf("%d", &input);
		for (;input != random;)
		{
			if (input > random)
				printf("Too big,try another:\n");
			else if (input < random)
				printf("Too small,try another:\n");
			scanf("%d", &input);
			count++;
			if (count == GUESSTIMESLIMIT)
			{
				printf("Bad\n");
				losetime++;
				break;
			}
			if (input == random)
			{
				printf("Good\n");
				completetime++;
				break;
			}
		}
		printf("type Y to begin the next round, type N to end the game.\n");
		playtime++;
		scanf("%s", &i);
		while ((i != 'Y') && (i != 'N'))
		{
			printf("invalid input.Try another.\n");
			scanf("%s", &i);
		}
	}
	winrate = float(completetime)/ float(playtime);
	printf(" Game Over. \n");
	printf(" You played %d times,win %d times,lose %d times. Win rate:%f%\n", playtime, completetime, losetime,winrate*100);
	return 0;
}
#include <stdio.h>

int max(int x, int y)
{
	if (x > y)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
int main()
{
	int x, y;
	scanf_s("%d%d", &x, &y);
	if (max(x,y) == 0)
	{
		printf("%d is bigest", x);
	}
	else
	{
		printf("%d is bigest", y);
	}
}
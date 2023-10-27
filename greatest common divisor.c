#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_min(int a, int b)
{
	return(a < b ? a : b);
}

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d %d", &a, &b);
	int m = get_min(a, b);
	for (m; m >= 1; m--)
	{
		if (a % m == 0 && b % m == 0)
		{
			printf("%d", m);
			break;
		}
	}



	return 0;
}
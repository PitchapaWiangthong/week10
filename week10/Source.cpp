#include<stdio.h>
#include<conio.h>
int main()
{
	int num[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

		SORT:printf("Enter number : ");
			num[i][j] = _getch();
			if (num[i][j] >= 48 && num[i][j] <= 57)
			{
				printf("number is  %d\n", num[i][j] - 48);
			}
			else
			{
				goto SORT;
			}

		}
	}
	printf("  MATRIX IS\n");
	printf("    ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (num[i][j] != NULL)
			{
				printf("%d ", num[i][j] - 48);
			}

		}
		printf("\n    ");
	}
	return(0);
}
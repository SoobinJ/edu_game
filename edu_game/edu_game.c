#include"stdio.h"
int totalscore;
void findSecret();
void arithGame();

int main(void)
{
	int menu = 0;

	while (menu != 4)
	{
		do
		{
			printf("\n1)����� ����\n");
			printf("2)����� �����\n");
			printf("3)���� ����\n");
			printf("4)������\n");
			printf("�޴��� �����ϼ���.");
			scanf("%d", &menu);
		} while (menu != 1 && menu != 2 && menu != 3 && menu != 4);
		if (menu == 1)
			arithGame();
		if (menu == 2)
			findSecret();
		if (menu == 3)
			printf("���ݱ����� ������ %d�Դϴ�.\n", totalscore);

	}

	return 0;
}
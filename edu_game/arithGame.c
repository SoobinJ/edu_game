#include"my.h"

int add(int max);
int subtract(int max);
int multiply(int max);
int score_c(int T);

int totalscore;

void arithGame()
{
	int menu;
	int max = 0;

	do
	{
		printf("\n1)���ϱ� �ҷ�?\n");
		printf("2)���� �ҷ�?\n");
		printf("3)���ϱ� �ҷ�?\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &menu);
	} while (menu != 1 && menu != 2 && menu != 3);

	do
	{
		printf("���ӿ� ����� �ִ� ���� ���� ��(1�̻�)�� �Է��Ͻÿ�: ");
		scanf("%d", &max);
	} while (max < 1);

	if (menu == 1)
		add(max);
	else if (menu == 2)
		subtract(max);
	else if (menu == 3)
		multiply(max);

	return 0;
}
int add(int max)
{
	int count = 0;
	int result = 0;
	int f = 0;
	int start, end, timespent;

	start = time(0);
	for (count = 0; count < 5; count++)
	{
		srand(time(0));
		int a = rand() % max + 1;
		int b = rand() % max + 1;

		printf("%d+%d= ", a, b);
		scanf("%d", &result);
		if (result != a + b)
		{
			printf("�����Դϴ�. ������ %d�Դϴ�. ���� 5�ʰ� �߰��˴ϴ�.\n", a + b);
			f++;
		}
	}
	end = time(0);
	timespent = end - start;

	int T = (timespent + f * 5) / 5;
	int s = score_c(T);

	printf("������ ��� %d���� �ð��� �ҿ�Ǿ�����,�̹� ������ ������ %d�Դϴ�.\n", T, s);

	totalscore = totalscore + s;

	return 0;

}
int subtract(int max)
{
	int count = 0;
	int result = 0;
	int f = 0;
	int start, end, timespent;

	start = time(0);
	for (count = 0; count < 5; count++)
	{
		srand(time(0));
		int a = rand() % max + 1;
		int b = rand() % max + 1;

		printf("%d-%d= ", a, b);
		scanf("%d", &result);
		if (result != a - b)
		{
			printf("�����Դϴ�. ������ %d�Դϴ�. ���� 5�ʰ� �߰��˴ϴ�.\n", a - b);
			f++;
		}
	}
	end = time(0);
	timespent = end - start;

	int T = (timespent + f * 5) / 5;
	int s = score_c(T);

	printf("������ ��� %d���� �ð��� �ҿ�Ǿ�����,�̹� ������ ������ %d�Դϴ�.\n", T, s);

	totalscore = totalscore + s;
	return 0;

}
int multiply(int max)
{
	int count = 0;
	int result = 0;
	int f = 0;
	int start, end, timespent;

	start = time(0);
	for (count = 0; count < 5; count++)
	{
		srand(time(0));
		int a = rand() % max + 1;
		int b = rand() % max + 1;

		printf("%d*%d= ", a, b);
		scanf("%d", &result);
		if (result != a * b)
		{
			printf("�����Դϴ�. ������ %d�Դϴ�. ���� 5�ʰ� �߰��˴ϴ�.\n", a * b);
			f++;
		}
	}
	end = time(0);
	timespent = end - start;

	int T = (timespent + f * 5) / 5;
	int s = score_c(T);

	printf("������ ��� %d���� �ð��� �ҿ�Ǿ�����,�̹� ������ ������ %d�Դϴ�.\n", T, s);

	totalscore = totalscore + s;

	return 0;
}
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
		printf("\n1)더하기 할래?\n");
		printf("2)빼기 할래?\n");
		printf("3)곱하기 할래?\n");
		printf("메뉴를 선택하세요: ");
		scanf("%d", &menu);
	} while (menu != 1 && menu != 2 && menu != 3);

	do
	{
		printf("게임에 사용할 최대 양의 정수 값(1이상)을 입력하시오: ");
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
			printf("오답입니다. 정답은 %d입니다. 벌점 5초가 추가됩니다.\n", a + b);
			f++;
		}
	}
	end = time(0);
	timespent = end - start;

	int T = (timespent + f * 5) / 5;
	int s = score_c(T);

	printf("문제당 평균 %d초의 시간이 소요되었으며,이번 게임의 점수는 %d입니다.\n", T, s);

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
			printf("오답입니다. 정답은 %d입니다. 벌점 5초가 추가됩니다.\n", a - b);
			f++;
		}
	}
	end = time(0);
	timespent = end - start;

	int T = (timespent + f * 5) / 5;
	int s = score_c(T);

	printf("문제당 평균 %d초의 시간이 소요되었으며,이번 게임의 점수는 %d입니다.\n", T, s);

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
			printf("오답입니다. 정답은 %d입니다. 벌점 5초가 추가됩니다.\n", a * b);
			f++;
		}
	}
	end = time(0);
	timespent = end - start;

	int T = (timespent + f * 5) / 5;
	int s = score_c(T);

	printf("문제당 평균 %d초의 시간이 소요되었으며,이번 게임의 점수는 %d입니다.\n", T, s);

	totalscore = totalscore + s;

	return 0;
}
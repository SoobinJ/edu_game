#include"my.h"

int num(int max);
int score_c(int T);

int totalscore;

void findSecret()
{
	int max = 0;
	int guess = 0;
	int tries = 0;

	do
	{
		printf("���ӿ� ����� �ִ� ���� ���� ��(1�̻�)�� �Է��Ͻÿ�: ");
		scanf("%d", &max);
	} while (max < 1);

	srand(time(0));
	int answer = rand() % max + 1;

	int start, end, timespent;
	start = time(0);
	do
	{
		printf("��� ���� ������ ������: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("�Է°��� �ʹ� Ů�ϴ�.");
		if (guess < answer)
			printf("�Է°��� �ʹ� �۽��ϴ�.");
	} while (guess != answer);

	end = time(0);
	timespent = end - start;
	printf("�����Դϴ�.\n�����մϴ�. �� %d�� ����, %d���� �õ��� �����Ͽ����ϴ�.\n", timespent, tries);

	int T = timespent / (2 * num(max));
	int s = score_c(T);

	printf("�̹� ������ ������ %d�Դϴ�.", s);

	totalscore = totalscore + s;

	return 0;
}
int num(int max)
{
	int count = 0;
	while (1)
	{
		max /= 10;
		count++;
		if (!max)
		{
			break;
		}
	}
	return count;

}

int score_c(int T)
{
	int score;

	if (T < 1)
		score = 10;
	else if (T <= 1 && T < 2)
		score = 9;
	else if (T <= 2 && T < 3)
		score = 8;
	else if (T <= 3 && T < 4)
		score = 7;
	else if (T <= 4 && T < 5)
		score = 6;
	else if (T <= 5 && T < 6)
		score = 5;
	else if (T <= 6 && T < 7)
		score = 4;
	else if (T <= 7 && T < 8)
		score = 3;
	else if (T <= 8 && T < 9)
		score = 2;
	else if (T <= 9 && T < 10)
		score = 1;
	else if (T >= 10)
		score = 0;

	return score;

}

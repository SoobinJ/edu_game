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
		printf("게임에 사용할 최대 양의 정수 값(1이상)을 입력하시오: ");
		scanf("%d", &max);
	} while (max < 1);

	srand(time(0));
	int answer = rand() % max + 1;

	int start, end, timespent;
	start = time(0);
	do
	{
		printf("비밀 값을 추측해 보세요: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("입력값이 너무 큽니다.");
		if (guess < answer)
			printf("입력값이 너무 작습니다.");
	} while (guess != answer);

	end = time(0);
	timespent = end - start;
	printf("정답입니다.\n축하합니다. 총 %d초 동안, %d번의 시도로 성공하였습니다.\n", timespent, tries);

	int T = timespent / (2 * num(max));
	int s = score_c(T);

	printf("이번 게임의 점수는 %d입니다.", s);

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

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
			printf("\n1)산수가 좋아\n");
			printf("2)비밀을 맞춰봐\n");
			printf("3)점수 보기\n");
			printf("4)끝내기\n");
			printf("메뉴를 선택하세요.");
			scanf("%d", &menu);
		} while (menu != 1 && menu != 2 && menu != 3 && menu != 4);
		if (menu == 1)
			arithGame();
		if (menu == 2)
			findSecret();
		if (menu == 3)
			printf("지금까지의 점수는 %d입니다.\n", totalscore);

	}

	return 0;
}
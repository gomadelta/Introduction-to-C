// クイックソート.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#define NUM 10

int main()
{
	int array[NUM];
	int max;
	int i, j, temp;

	printf("10個の数字を入力してください。\n");
	for (int i = 0; i < NUM; i++) {
		scanf_s("%d", &array[i]);
	}

	printf("並べ替え前 ");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");

	/*ソート*/

    return 0;
}


// バブルソート.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#define NUM 10


int main()
{
	int array[NUM];
	int temp, i, j, k, l, m;

	printf("10個の数字を入力してください。\n");
	for (i = 0; i < NUM; i++) {
		scanf_s("%d", &array[i]);
	}

	printf("並べ替え前 ");
	for (j = 0; j < NUM; j++) {
		printf("%d ", array[j]);
	}

	printf("\n");

	/*ソート*/
	for (k = 0; k < NUM; k++) {
		for (l = k + 1; l < NUM; l++) {
			if (array[l] > array[k]) {
				temp = array[l];
				array[l] = array[k];
				array[k] = temp;
			}
		}
	}

	printf("並べ替え後 ");
	for (m = 0; m < NUM; m++) {
		printf("%d ", array[m]);
	}

	return 0;
}

// 選択ソート.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
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
	/*最大値の位置を探す*/
	for (i = 0; i < NUM - 1; i++) {
		max = i;
		for (j = i+1; j < NUM; j++) {
			if (array[max] < array[j]) {
				max = j;
			}
		}
		/*先頭より大きい値があれば入れ替え*/
		if (max != i) {
			temp = array[i];
			array[i] = array[max];
			array[max] = temp;
		}
	}
	printf("並べ替え後 ");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", array[i]);
	}
    return 0;
}


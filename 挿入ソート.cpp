// 挿入ソート.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
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
	for (i = 1; i < NUM; i++) {
		j = i;
		while (j >= 1 && array[j - 1] < array[j]) {
			temp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = temp;
			j--;
		}
	}
	printf("並べ替え後 ");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", array[i]);
	}


    return 0;
}


// シェルソート.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#define NUM 10

int main()
{
	int array[NUM];
	int max;
	int i, j, temp, step;

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
	step = NUM / 2;
	/*飛ばしていく数を設定*/
	while (step > 0) {
		for (i = 0; i < NUM; i++) {
			j = i;
			temp = array[i];
			/*順序が適切でなければ並び替えを行う*/
			while (j >= step && array[j - step] < temp) {
				array[j] = array[j - step];
				j -= step;
			}
			array[j] = temp;
		}
		step /= 2;
	}

	printf("並べ替え後 ");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", array[i]);
	}

    return 0;
}


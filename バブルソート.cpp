// �o�u���\�[�g.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#define NUM 10


int main()
{
	int array[NUM];
	int temp, i, j, k, l, m;

	printf("10�̐�������͂��Ă��������B\n");
	for (i = 0; i < NUM; i++) {
		scanf_s("%d", &array[i]);
	}

	printf("���בւ��O ");
	for (j = 0; j < NUM; j++) {
		printf("%d ", array[j]);
	}

	printf("\n");

	/*�\�[�g*/
	for (k = 0; k < NUM; k++) {
		for (l = k + 1; l < NUM; l++) {
			if (array[l] > array[k]) {
				temp = array[l];
				array[l] = array[k];
				array[k] = temp;
			}
		}
	}

	printf("���בւ��� ");
	for (m = 0; m < NUM; m++) {
		printf("%d ", array[m]);
	}

	return 0;
}

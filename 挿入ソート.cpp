// �}���\�[�g.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#define NUM 10

int main()
{
    int array[NUM];
    int max;
    int i, j, temp;

    printf("10�̐�������͂��Ă��������B\n");
	for (int i = 0; i < NUM; i++) {
		scanf_s("%d", &array[i]);
	}

	printf("���בւ��O ");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");

    /*�\�[�g*/
	for (i = 1; i < NUM; i++) {
		j = i;
		while (j >= 1 && array[j - 1] < array[j]) {
			temp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = temp;
			j--;
		}
	}
	printf("���בւ��� ");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", array[i]);
	}


    return 0;
}


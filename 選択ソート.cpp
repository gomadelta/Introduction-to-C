// �I���\�[�g.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
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
	/*�ő�l�̈ʒu��T��*/
	for (i = 0; i < NUM - 1; i++) {
		max = i;
		for (j = i+1; j < NUM; j++) {
			if (array[max] < array[j]) {
				max = j;
			}
		}
		/*�擪���傫���l������Γ���ւ�*/
		if (max != i) {
			temp = array[i];
			array[i] = array[max];
			array[max] = temp;
		}
	}
	printf("���בւ��� ");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", array[i]);
	}
    return 0;
}


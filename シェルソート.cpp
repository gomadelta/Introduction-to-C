// �V�F���\�[�g.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#define NUM 10

int main()
{
	int array[NUM];
	int max;
	int i, j, temp, step;

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
	step = NUM / 2;
	/*��΂��Ă�������ݒ�*/
	while (step > 0) {
		for (i = 0; i < NUM; i++) {
			j = i;
			temp = array[i];
			/*�������K�؂łȂ���Ε��ёւ����s��*/
			while (j >= step && array[j - step] < temp) {
				array[j] = array[j - step];
				j -= step;
			}
			array[j] = temp;
		}
		step /= 2;
	}

	printf("���בւ��� ");
	for (int i = 0; i < NUM; i++) {
		printf("%d ", array[i]);
	}

    return 0;
}


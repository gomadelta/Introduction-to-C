// �N�C�b�N�\�[�g.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
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

    return 0;
}


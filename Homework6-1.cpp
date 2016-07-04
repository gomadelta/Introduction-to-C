// Homework6-1.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"


int main()
{
	double num1, num2;
		printf("底辺と高さの長さから三角形の面積を求めます。\n");
		
		printf("底辺の長さを入力して下さい。\n");
			scanf_s("%lf", &num1);

		printf("高さを入力してください。\n");
			scanf_s("%lf", &num2);
		
		printf("面積は%fです。\n", num1 * num2 / 2);
	
	return 0;
}


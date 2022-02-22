#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Recursive(int num)
{
	//if (num == 0) 이렇게 작성하여도 되지만, 
	if (num <= 0)	//만일의 상황(순간적으로 컴파일러가 0 을 읽지못하고 지나가서 num의 값이 - 값으로 바뀌어벼렸다던가,,)에 대비한 안전장치
		return;
	printf("Recursice call! %d \n", num);
	Sleep(1000);
	Recursive(num - 1);
}

int main(void)
{

	Recursive(3);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Recursive(int num)
{
	//if (num == 0) �̷��� �ۼ��Ͽ��� ������, 
	if (num <= 0)	//������ ��Ȳ(���������� �����Ϸ��� 0 �� �������ϰ� �������� num�� ���� - ������ �ٲ��ȴٴ���,,)�� ����� ������ġ
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
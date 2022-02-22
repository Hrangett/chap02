#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 4
//int pact()
//{
//	int res = 1;
//	for (int i = num; i > 0; i--)
//	{
//		res = res * i;
//	}
//	return res;
//}

int pact(int res,int i)
{
	if (i <= 0)
		return res;
	res = res * i;
	pact(res, i - 1);
}
int main(void)
{
	int res = 1;
	//!
	//res = pact();

	//printf("%d", res);

	res = pact(res,num);
	printf("%d", res);


	return 0;
}
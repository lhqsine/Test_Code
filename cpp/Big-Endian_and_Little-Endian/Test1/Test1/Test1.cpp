// Test1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int k;
	int j;
	printf( "%p\n", &k );
	printf( "%p\n", &j );
	// windows��ջ���е�ַ�Ӹߵ������� gcc�·����Ǵӵ͵���

	union MyUnion
	{
		int a;
		char b;
	};
	MyUnion t;
	t.a = 1;
	printf("t.a addr=%p \n", &(t.a));
	printf("t.b addr=%p \n", &(t.b));
	printf("t.b = %d \n", t.b);   //���windows��Ϊ1������С�ˣ���ַ�ǴӸߵ������룬����ȡ����ǰ���ͷӦ��Ϊ1��


	const unsigned int temp = 0x12345678;
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("addr=%p,  value=%x\n", &(((unsigned char*)&temp)[i]), ((unsigned char*)&temp)[i]);
	}




	system("pause");
	return 0;
}


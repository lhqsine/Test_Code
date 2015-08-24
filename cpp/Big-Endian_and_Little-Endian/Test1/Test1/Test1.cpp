// Test1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int k;
	int j;
	printf( "%p\n", &k );
	printf( "%p\n", &j );
	// windows下栈当中地址从高到低申请 gcc下反而是从低到高

	union MyUnion
	{
		int a;
		char b;
	};
	MyUnion t;
	t.a = 1;
	printf("t.a addr=%p \n", &(t.a));
	printf("t.b addr=%p \n", &(t.b));
	printf("t.b = %d \n", t.b);   //因此windows下为1，则是小端，地址是从高到底申请，所以取到的前面的头应该为1。


	const unsigned int temp = 0x12345678;
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("addr=%p,  value=%x\n", &(((unsigned char*)&temp)[i]), ((unsigned char*)&temp)[i]);
	}




	system("pause");
	return 0;
}


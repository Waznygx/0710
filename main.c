#include<stdio.h>
//int main()
//{
//	int a = -10;		//0x00000055C234F9C4  f6 ff ff ff 16 20 cd 0e f9 7f
//	int b = 10;			//0x00000055C234F9E4  0a 00 00 00 50 00 00 00 00 00
//	//float f = 10.0;	//0x0000000F9258FA04  98 01 00 00 50 00 00 00 00 00
//	return 0;
//}

////写一段代码告诉我们当前机器字节序是什么
//// 第四版
//int Check_sys(int a)
//{
//	return *(char*)&a;
//	//return (char*)&a;//不正确！！！！结果会变成大端
//}
//////第三版
////int Check_sys(int a)
////{
////	char* p = (char*)&a;
////	return *p;
////}
//////第二版
////int Check_sys(int a)
////{
////	char* p = (char*)&a;
////	if (*p==1)
////	{
////		return 1;
////	}
////	return 0;
////}
//int main()
//{
//	int a = 1;
//	if (Check_sys(a) == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//////第一版
////int main()
////{
////	int a = 1;
////	char* p = (char*)&a;
////	if (*p==1)
////	{
////		printf("小端\n");
////	}
////	else
////	{
////		printf("大端\n");
////	}
////	return 0;
////}

int main()
{
	double f = 1E10;
	printf("%lf\n", f);
	return 0;
}
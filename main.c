#include<stdio.h>
//int main()
//{
//	int a = -10;		//0x00000055C234F9C4  f6 ff ff ff 16 20 cd 0e f9 7f
//	int b = 10;			//0x00000055C234F9E4  0a 00 00 00 50 00 00 00 00 00
//	//float f = 10.0;	//0x0000000F9258FA04  98 01 00 00 50 00 00 00 00 00
//	return 0;
//}

////дһ�δ���������ǵ�ǰ�����ֽ�����ʲô
//// ���İ�
//int Check_sys(int a)
//{
//	return *(char*)&a;
//	//return (char*)&a;//����ȷ��������������ɴ��
//}
//////������
////int Check_sys(int a)
////{
////	char* p = (char*)&a;
////	return *p;
////}
//////�ڶ���
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//////��һ��
////int main()
////{
////	int a = 1;
////	char* p = (char*)&a;
////	if (*p==1)
////	{
////		printf("С��\n");
////	}
////	else
////	{
////		printf("���\n");
////	}
////	return 0;
////}

int main()
{
	double f = 1E10;
	printf("%lf\n", f);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float R1=1, R2=1, U=1, I1, I2;
	printf("enter Thee numbers R1,R2,U:",R1,R2,U );
	scanf("%f,%f,%f",&R1,&R2,&U);
	I1 = U / (R1 + R2);
	I2 = U / ((R1 + R2) / (R1 * R2));
	printf("I1=%f,I2=%f\n", I1, I2);
	printf("2000200908陈水根\n");
	return 0;
}
//main()
//{
//	int r;
//	double a, s;
//
//
//	printf("Pleasr Input value:");
//	scanf("%d", &r);
//	a = 3.14 * r * r;
//	s = 2 * 3.14 * r;
//	printf("a=%8.2f,s=%.2f\n", a, s);
//	printf("2000200908陈水根");
//}
//#define _CRT_SECURE_NO_WARNINGS 1
////2000200908陈水根
//#include<stdio.h>
//int main()
//{
//	int a, b, c, s;
//	a = 1;
//	b = 2;
//	c = 3;
//	printf("%d,%d,%d\n", a++, b--, ++c + 3);
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	printf("%d,s=%d\n", (s = 5 * 6, a + b + c), s);
//	printf("2000200908陈水根");
//	return 0;
//}
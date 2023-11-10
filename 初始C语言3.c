#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//一、操作符
//1.算数操作符：+ - * / &
/*int main()
{
	int a = 7 / 2;//求商
	printf("%d\n", a);//3  -商三余零 

	int b = 7 % 2;//取模  -余数
	printf("%d\n", b);//1  -商三余一
	//取模操作符只能是整数

	//除号两边都是整数，执行的是整数除法
	//如果两端只要有一个浮点数就执行浮点数的除法
	float c = 7.0 / 2;
	printf("%f\n", c);//3.500000
	printf("%.1f\n", c);//3.5	'%.1f'表示小数点保留一位

	return 0;
}*/

//2.移位操作符：<< >>
//3.位操作符：& ^ |
//4.赋值操作符：= += -= *= /= &= ^= |= <<= >>=
//5.单目操作符：! - + & sizeof ~ -- ++ * (类型)
// a + b ;	+就是双目操作符
//单目操作符：只有一个操作数的操作符

//在C语言中，0表示假，非0为真
/*int main()
{
	int flag = 0;
	if (!flag)// ！ -逻辑反操作
	{
		printf("nb\n");
	}
	//sizeof是单目操作符，不是函数
	int a = 10;
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof (int));//4
	printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof int);//err
	//sizeof 是一个操作符不是函数，可以直接后面用参数名，但不能直接用参数类型，要加括号()

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(arr[0]));//4
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10	-数组的元素个数

	//前置++：先++，后使用
	//后置++：先使用，后++

	//前置--：先--，后使用
	//后置--：先使用，后--

	//(类型)：强制类型转换
	int m = (int)3.14;//3.14	为字面浮点数，编译器默认理解为double类型
	printf("%d\n", m);//3

	return 0;
}*/

//6.关系操作符：> >= < <= != ==
//7.逻辑操作符：&& ||
/*int main()
{
	int a = 10;
	int b = 20;
	if (a && b)//逻辑与 - 并且（真真为真，其他为假）
	{
		printf("nb\n");
	}
	if (a || b)//逻辑或 - 或者（假假为假，其他为真）
	{
		printf("nb\n");
	}
	return 0;
}*/

//8.条件操作符：exp1 ? exp2 : exp3
//三目操作符，有三个操作数
/*int main()
{
	int a = 10;
	int b = 20;
	int max = (a > b ? a : b);//判断a和b谁最大
	//exp1 ? exp2 : exp3
	// 真  ？ √  ： ×
	// 假  ？ ×  ： √

	printf("%d\n", max);//20
	return 0;
}*/

//9.逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
/*int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	int d = (c = a - 3, a= c + b, c - 5);
	//			c=7		   a=27		2
	printf("%d\n", d);//2
	return 0;
}*/

//10.下标引用、函数调用和结构成员
/*int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 3;
	arr[n] = 20;//[]就是下标引用操作符，arr和n就是[]的操作数
	//a + b;		+就是操作符，a和b为+的操作数

	return 0;
}*/
/*int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int sum = Add(2, 3);//()为函数调用操作符，Add,2,3都是()的操作数
	printf("%d\n", sum);

	return 0;
}*/

//11.常见关键字：
//auto break case char const continue default do double else enum
//extern float for goto if int long register return short signed
//sizeof static struct switch typedef union unsigned void volatile while

//变量的命名
//1.有意义
//2.名字必须是字母、数字、下划线组成，不能有特殊字符，同时不能以数字开头
//3.变量名不能是关键字
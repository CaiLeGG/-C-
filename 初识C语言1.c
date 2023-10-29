#define _CRT_SECURE_NO_WARNINGS
//什么是C语言？
//C语言是一门通用的计算机编程语言，广泛用于底层开发。
//C语言的设计目标是提供一种能以简易的方式编译、处理低级存储器、产生少量的机器码以及不需要任何运行环境支持便能运行的编程语言。
//计算机语言的发展：低级-->高级
//二进制的指令 -> 汇编指令(助记符) -> B语言 -> C语言(高级语言)
//C语言的国际标准：
//ANSI C
//C89 C90 C99 C11 ...
//其编译器主要有Clang、GCC、WIN-TC、MSVC（VS2019）、Turbo C等。
//编辑器-编辑功能
//编译器-编译功能（能够处理）
//C/C++ 是编译型的语言
//test.c  -> 编译 -> 链接 ->test.exe(文件)
//python -> 解释器 -> 实现功能

//写一个C语言程序  VS2019-环境
// 1.打开VS
// 2.创建项目
// 3.创建源文件（.c 为源文件   .h 为头文件）
// 4.写代码

#include <stdio.h>

/*int main()
{
	printf("hehe\n");

	return 0;
}*///VS2019环境运行代码：快捷键ctrl+F5--快速编译

//C语言代码中一定要有main函数
//主函数-- int main()
// main函数是程序的入口
// main函数有且仅有一个
// printf是一个库函数--专门用来打印数据的

// #include <stdio.h>
// include - 包含的意思
// std - 标准
// i - input(输入)
// o - output(输出)

//标准的主函数写法
/*
int main()//int -整型类型  (void) -明确表示没有参数传给main函数
{

	return 0;//返回0 --整数
}
*/

//古老的写法
/*
void main()//() -表示
{

	return 0;
}
*/

//ctrl+kc - 注释
//ctrl+ku - 取消注释

//2.数据类型
// char - 字符数据类型
// short - 短整型
// int - 整型
// long - 长整型
// long long - 更长的整型
// float - 单精度浮点数
// double - 双精度浮点数
// 
// eg：《鹏哥C语言》-66.6
//《鹏哥C语言》--字符串 -char
// 66.66       --小数 -float
// 66          --整数 -int
//
// 在内存中怎么知道每个类型的大小？
//
/*
int main()
{
	printf("%d\n", 100);//--100   //%d -打印格式是整型类型  \n -换行
	printf("%zu\n", sizeof(char));//--1  //sizeof -谁的大小  //返回的char类型的数据占内存的大小
	printf("%zu\n", sizeof(short));//--2  //%zu -打印一个sizeof返回的无符号的整型  z -表示的是sizeof的返回值  u -表示的是unside无否
	printf("%zu\n", sizeof(int));//--4  
	printf("%zu\n", sizeof(long));//--4  单位：字节    规定：sizeof(long) >= sizeof(int)
	printf("%zu\n", sizeof(long long));//--8
	printf("%zu\n", sizeof(float));//--4
	printf("%zu\n", sizeof(double));//--8
	//计算机中的单位：
	// bit --比特位   二进制中：一个比特位只能存两个位，一个是1一个是0
	// byte --字节    1字节=8比特位
	// kb             1kb=1024byte
	// mb
	// gb
	// tb
	// pb
	//


	return 0;
}*/

/*
int main()
{
	int age = 20;//我向内存申请了4个字节的空间来存放20  //age -可变的量，为这个内存的名字
	double price = 66.6;

	return 0;
}*/

//变量和常量的概念
// 变量分为全局变量和局部变量
// 全局变量：{}外部定义的变量
// 局部变量：{}内部定义的变量

/*
int b = 20;//全局变量
int main()
{
	short age = 20;//年龄
	int high = 180;//身高
	float weight = 88.5;//体重
	int a = 10;//局部变量

	return 0;
}*/

/*
int a = 100;
int main()
{
	int a = 10;//在同一个范围里，变量名字只能出现一次，不能重复定义
	printf("a=%d\n", a);//--10   当全局变量和局部变量的名字相同的情况下，局部优先
	//建议：尽量不要将全局和局部变量的名字写成一样的
	return 0;
}*/

//写一个代码计算2个整数的值
//scanf  是一个输入函数
//printf 是一个输出函数
/*
int main()
{
	int num1 = 0;//如果不初始化，则会赋一个随机值进去
	int num2 = 0;//初始化

	//输入2个整数
	scanf("%d %d", &num1, &num2);//scanf -需要的是地址  
	//scanf_s这个函数是VS编译器自己提供的函数，非标准C语言提供的函数，那也就是只有VS编译器认识，其他编译器不认识
	//在VS的安装路径下有一个文件：newc++file.cpp 的文件
	//在VS工程中创建新的.c或者.cpp文件的时候，都是拷贝 newc++file.cpp 这个文件的！

	//求和
	int sum = num1 + num2;

	//输出
	printf("%d\n", sum);

	return 0;
}*/

// 变量的作用域--作用域是程序设计概念，通常来说，
//				 一段程序代码中所用到的名字并不总是有效/可用的，而限定这个名字的可用性的代码范围就是这个名字的作用域
//				 （这个名字在哪里使用，哪里就是他的作用域）
// 1.局部变量的作用域是变量所在的局部范围
// 2.全局变量的作用域是整个工程
/*
int main()
{
	{
		int a = 10;
		printf("%d\n", a);//--10 a只在小括号中出现（小括号为局部变量），大括号中无 a 的定义，所以打印不出来
	}
	printf("%d\n", a);//出错-- a 未被定义
	//若 a 在其他文件中定义了，如果要是用他的话，需要声明一下来自外部的符号 -- extern int a;

	return 0;
}*/
// 
// 变量的生命周期--指的是变量的创建到变量的销毁之间的一个时间段
// 1.局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
// 2.全局变量的生命周期是：整个程序的生命周期	
// 
//
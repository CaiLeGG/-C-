#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//常量：用来表示不变的量
//C语言中的常量：有四种
//1.字面常量
//2.const修饰的常变量
//3.#define定义的标识符常量
//4.枚举常量


/*int main()
{
	//1.字面常量
	4;
	3.14;
	'w';//字符
	"abc";//字符串

	//2.const修饰的常变量
	const int a = 10;//在C语言中，const修饰的是a，本质是变量，但不能直接修改，具有常量的属性
	a = 20;
	printf("%d\n", a);//err  -const修饰的a不能改，系统显示错误

	int arr[10] = { 0 };//创建了一个数组，里面有10个为整型的方块，每个方块里用0去填充 --[]中必须为常量
	int arr[a] = { 0 };//err
	
	return 0;
 }*/

//3.#define 定义的标识符常量
/*#define MAX 100 //MAX -标识符(大小写都可以)
#define STR "abcdef" //也可以定义字符串
int main()
{
	printf("%d\n", MAX);//100
	int a = MAX;
	printf("%d\n", a);//100
	//MAX = 200;//err -define定义的标识符常量不能改
	printf("%s\n", STR);//%s -打印的是字符串

	return 0;
}*/

//4.枚举常量
/*enum Color//颜色
{
	RED,//枚举常量 -不能改变
	GREEN,
	BLUE
};
enum Sex//性别
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	//eg：三原色 - RED GREEN BLUE
	enum Color c = RED ;//创建了一个Color的变量叫c，然后把RED红色赋值了进去
	enum Sex;
	MALE = 10;//err -不能修改
	return 0;
}*/

//三.字符串+转义字符+注释

//1.字符串
//C语言中有字符类型，但是没有字符串类型
/*#include <string.h>
int main()
{
	char ch = 'w';
	char arr1[] = "abcdef";//字符串用数组来存放
	//创建了一个名为arr的数组，里面有10个元素且元素类型为char字符类型，用来存放abcd字符串
	//arr1数组里面有7个元素  -字符串结束的标志是\0的转义字符
	char arr2[] = {'a','b','c','d','e','f'};//里面有6个元素，无\0
	printf("%s\n",arr1);//abcdef
	printf("%s\n",arr2);//abcdef烫烫烫烫  -因为数组arr2中没有结束标志\0，所以他会在内存中一直往下找\0，找到为止
	char arr3[] = { 'a','b','c','d','e','f','\0'};//里面有7个元素
	printf("%s\n", arr3);//abcdef  -如果后面补多一个\0，告诉他到这里已经停止了，那他就不会出现乱码的情况

	//用strlen来求一下他们的字符串长度，string length	头文件 string.h
	int len = strlen (arr1);//
	printf("%d\n", len);//6  -- \0是一个字符串的结束标志，不算作字符串内容

	printf("%d\n", strlen(arr2));//38  -- 因为要存放在数组中的字符没有\0，所以会往后面再找，找到为止
	printf("%d\n", strlen(arr3));//6

	return 0;
}*/

//2.转义字符 -转变了原来意思的字符叫转义字符
//三字母词
//??(  -->  [		
//??)  -->  ]

//%d -打印整型
//%c -打印字符
//%s -打印字符串
//%f -打印float类型的数据
//%lf -打印double类型的数据
//%zu -打印sizeof的返回值

/*int main()
{
	//printf("abcd\n");//原来的n，被转义成\n（换行）
	//printf("abcd\0ef");//原来的0，被转义成\0（字符串结束标志）

	printf("%s\n", "(are you ok??)");// '\?'  -防止被解析成三字母词
	//(are you ok]  

	printf("%c\n", '\'');// '\''	-防止被解析成''
	printf("%s\n", "\"");// '\"'	-防止被解析成""

	printf("abcd\\0ef\n");//abcd\0ef	 '\\'	-转义了后面的\

	printf("c:\test:\test.c\n");//c:      est:    est.c
	// '\t'		-水平制表符（类似于tab键）
	//想要打印完整的路径就要再用一个'\'
	printf("c:\\test:\\test.c\n");//c:\test : \test.c
	//一般的路径都用两个 '\\'

	printf("\a");// '\a'	-警告字符，蜂鸣
	// '\r'		-回车
	// '\ddd'		-ddd表示1~3个八进制的数字。如：\130 X
	printf("%c\n", '\130' );//转义字符也是字符  - \130 为一个字符，这个字符就是X
	//将\后面的八进制数字转化成十进制之后用ASCII码值表示出来
	// 八进制的130 = 1 x 8^2 + 3 x 8^1 + 0 x 8^0 = 十进制的88 用ASCII码值表示为 X
	
	// ASCII码值为 0 的十进制为48
	// ASCII码值为 1 的十进制为49
	// ASCII码值为 A 的十进制为65
	// ASCII码值为 a 的十进制为97
	
	// '\xdd'		-dd表示2个十六进制数字。如：\x30 0
	printf("%c\n", '\x60');//`  也可以用 '\x060' 来表示
	//将后面十六进制的数字转化成十进制之后用ASCII码值表示出来
	//十六进制的60 = 6 x 16^1 + 0 x 16^0 = 十进制的96 用ASCII码值表示为 `
	//转化成ASCII码值的十进制的范围要在 0-127

	//笔试题：
	printf("%d\n", strlen("c:\test\628\test.c"));//14
	// \t 是一个字符，所输出的效果相当于4个空格
	return 0;
}*/

//四.注释
//1.代码中有不需要的代码可以直接删除，也可以注释掉
//2.代码中有些代码比较难懂，可以加一下注释文字
// C语言的注释风格 - /**/ 可以多行一起注释(不支持嵌套注释)
// C++的注释风格   - //   可以单行注释,也可以多行注释

//五.选择语句  -if else switch
/*int main()
{
	int input = 0;
	printf("你是否想要好好努力？(1/0)");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("过上好生活\n");
	}
	else
	{
		printf("回老家捡牛屎\n");
	}
	return 0;
}*/

//六.循环语句  - while语句、for语句、do while语句
/*int main()
{
	int money = 0;
	printf("今天是否有好好努力\n");
	while(money < 100000)
	{
		printf("有好好努力：%d\n", money);
		money++;
	}
	if (money >= 100000)
	{
		printf("成功人士\n");
	}
	else
	{
		printf("继续努力\n");
	}

	return 0;
}*/

//C语言是【结构化】的程序设计语言
//1.顺序结构
//2.选择结构
//3.循环结构

//七.函数

//用函数来求两个整数的和
/*int main()
{
	int num1 = 0;
	int num2 = 0;
	//输入
	scanf("%d %d", &num1, &num2);
	//计算
	int sum = ADD(num1, num2);
	//输出
	printf("%d\n", sum);
	return 0;
}
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}*/

//八.数组
//定义：一组相同类型元素的集合
//数组的每个元素都有一个下标，下标是从0开始的
int main()
{
	//也可以是其他类型的素组
	char ch[2];
	double b[9];

	//储存0~9的数字
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[8]);//9  
	//如果要全部打印数组中的全部内容
	int i = 0;
	while ( i<10 )
	{
		printf("%d ", arr[i]);
		i = i + 1;
	}
	return 0;
}

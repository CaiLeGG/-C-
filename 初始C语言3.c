#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//һ��������
//1.������������+ - * / &
/*int main()
{
	int a = 7 / 2;//����
	printf("%d\n", a);//3  -�������� 

	int b = 7 % 2;//ȡģ  -����
	printf("%d\n", b);//1  -������һ
	//ȡģ������ֻ��������

	//�������߶���������ִ�е�����������
	//�������ֻҪ��һ����������ִ�и������ĳ���
	float c = 7.0 / 2;
	printf("%f\n", c);//3.500000
	printf("%.1f\n", c);//3.5	'%.1f'��ʾС���㱣��һλ

	return 0;
}*/

//2.��λ��������<< >>
//3.λ��������& ^ |
//4.��ֵ��������= += -= *= /= &= ^= |= <<= >>=
//5.��Ŀ��������! - + & sizeof ~ -- ++ * (����)
// a + b ;	+����˫Ŀ������
//��Ŀ��������ֻ��һ���������Ĳ�����

//��C�����У�0��ʾ�٣���0Ϊ��
/*int main()
{
	int flag = 0;
	if (!flag)// �� -�߼�������
	{
		printf("nb\n");
	}
	//sizeof�ǵ�Ŀ�����������Ǻ���
	int a = 10;
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof (int));//4
	printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof int);//err
	//sizeof ��һ�����������Ǻ���������ֱ�Ӻ����ò�������������ֱ���ò������ͣ�Ҫ������()

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(arr[0]));//4
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10	-�����Ԫ�ظ���

	//ǰ��++����++����ʹ��
	//����++����ʹ�ã���++

	//ǰ��--����--����ʹ��
	//����--����ʹ�ã���--

	//(����)��ǿ������ת��
	int m = (int)3.14;//3.14	Ϊ���渡������������Ĭ�����Ϊdouble����
	printf("%d\n", m);//3

	return 0;
}*/

//6.��ϵ��������> >= < <= != ==
//7.�߼���������&& ||
/*int main()
{
	int a = 10;
	int b = 20;
	if (a && b)//�߼��� - ���ң�����Ϊ�棬����Ϊ�٣�
	{
		printf("nb\n");
	}
	if (a || b)//�߼��� - ���ߣ��ټ�Ϊ�٣�����Ϊ�棩
	{
		printf("nb\n");
	}
	return 0;
}*/

//8.������������exp1 ? exp2 : exp3
//��Ŀ��������������������
/*int main()
{
	int a = 10;
	int b = 20;
	int max = (a > b ? a : b);//�ж�a��b˭���
	//exp1 ? exp2 : exp3
	// ��  �� ��  �� ��
	// ��  �� ��  �� ��

	printf("%d\n", max);//20
	return 0;
}*/

//9.���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//���ű��ʽ���ص㣺�����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
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

//10.�±����á��������úͽṹ��Ա
/*int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 3;
	arr[n] = 20;//[]�����±����ò�������arr��n����[]�Ĳ�����
	//a + b;		+���ǲ�������a��bΪ+�Ĳ�����

	return 0;
}*/
/*int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int sum = Add(2, 3);//()Ϊ�������ò�������Add,2,3����()�Ĳ�����
	printf("%d\n", sum);

	return 0;
}*/

//11.�����ؼ��֣�
//auto break case char const continue default do double else enum
//extern float for goto if int long register return short signed
//sizeof static struct switch typedef union unsigned void volatile while

//����������
//1.������
//2.���ֱ�������ĸ�����֡��»�����ɣ������������ַ���ͬʱ���������ֿ�ͷ
//3.�����������ǹؼ���
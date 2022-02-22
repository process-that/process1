#include<iostream>
using namespace std;
//for循环练习案例 敲桌子
//从1开始数到100，如果数字个位含有7，或者十位含有7，或者该数字是7的倍数，则打印敲桌子，其余数字直接打印输出

//1.先输出1到100
//2.从这100个数字中找到符合条件的打印敲桌子\
//特殊数字
//7的倍数 %7=0
//个位有7 &10=7
//十位有7 /10=7
//int main()
//{
//	for (int i = 1;i <= 100;i++)
//	{
//		if (i%7==0||i%10==7||i/10==7)
//		{
//			cout << "敲桌子" << endl;
//		}
//		else {
//			cout << i << endl;
//		}
//	}
//
//	system("pasue");
//	return 0;
//}

//嵌套循环
//在循环体中再嵌套一层循环
//int main()
//{
//	for (int i = 0;i < 10;i++) {
//		for (int j = 0;j < 10;j++) {
//			cout << "* "; 
//		}
//		cout << endl;
//	}
//	system("pasue");
//	return 0;
//}

//乘法口诀表
int main()
{
	for (int i = 1;i < 10;i++) {
		for (int j = 1;j <= i;j++) {
			cout << j<<"*"<<i<<"="<<j*i<<" ";
		}
		cout << endl;
	}
	return 0;
}
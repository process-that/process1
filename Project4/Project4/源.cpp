#include<iostream>
using namespace std;

//do while 循环
//int main()
//{
	////在屏幕中输出0到9十个数字
	//int num = 0;
	//do {
	//	cout << num << endl;
	//	num++;
	//} while (num < 10);
	
	//水仙花数是指一个三位数，每个位上的数字三次幂之和等于他本身
	//例如1^3+5^3+3^3=153
	//用do while语句求出三位数中所有的水仙花数
	//1.将所有的三位数进行输出
	//2.在所有三位数中找到水仙花数
	//获取个位：对数字取模于10，可以得到个位数
	//获取十位：先整除于10，得到两位数，再取模于10得到十位数
	//获取百位：取模于100
//	int num = 100;
//	do {
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10;
//		b = (num / 10) % 10;
//		c = num / 100;
//		if (a*a*a + b*b*b + c*c*c == num)//如果是水仙花数才打印
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	return 0;
//}

//for循环
int main()
{
	//输出0到9
	for (int i = 0;i < 10;i++) {
		cout << i << endl;
	}
	return 0;
}
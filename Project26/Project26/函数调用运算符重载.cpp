#include<iostream>
using namespace std;
#include<string>

//函数调用运算符也能重载
//由于重载后使用的方式非常像函数的调用，因此称为仿函数
//仿函数没有固定写法，非常灵活

//打印输出类
class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void MyPrint02(string test)
{
	cout << test << endl;
}
void test01()
{
	MyPrint myPrint;
	myPrint("hello world");
	MyPrint02("hello world");
}
int main()
{
	test01();
	return 0;
}
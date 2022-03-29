#include<iostream>
using namespace std;
#include<string>
//作用：通过重载递增运算符，实现自己的整型数据
//自定义整型
class MyInteger
{
public:
	friend ostream& operator<<(ostream& cout, MyInteger myint);
	MyInteger()
	{
		m_Num = 0;
	}
	//重载前置++运算符
 MyInteger& operator++()
	{
	 //先进行++运算
	m_Num++;
	//在将自身返回 
	return *this;
	}
 //重置后置++运算符
MyInteger operator++(int)//int 代表占位参数，可以用于区分前置后置递增
 {
	 //先记录当时结果
	 MyInteger temp = *this;
	 //后递增
	 m_Num++;
	 //最后将记录结果返回
	 return temp;
 }

private:
	int m_Num;
};
//重载<<运算符
ostream& operator<<(ostream& cout, MyInteger myint)//返回引用是为了一直对一个数据进行操作
{
	cout << myint.m_Num;
	return cout;
}
void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}
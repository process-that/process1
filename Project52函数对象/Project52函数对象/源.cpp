#include<iostream>
using namespace std;

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test01()
{
	MyAdd myadd;
	cout<<myadd(10, 10)<<endl; 
}
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		cout << this->count++ << endl;
	}
	int count;//内部自己的状态
};
void test02()
{
	MyPrint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	cout << "myprint调用的次数为： " << myprint.count << endl;
}

//函数对象作参数传递
void doPrint(MyPrint &mp,string test)
{
	mp(test);
}
void test03()
{
	MyPrint	myPrint;
	doPrint(myPrint, "hello c++");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
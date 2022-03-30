//#include<iostream>
//using namespace std;
//#include<string>
//
////C++编译器至少给一个类添加四个函数
////1.默认构造函数（无参，函数体为空）
////2.默认析构函数（无参，函数体为空）
////3.默认拷贝构造函数，对属性值进行拷贝
////4.赋值运算符operator=对属性值进行拷贝
//
////赋值运算符重载
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);//在堆区存放数据
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//重载赋值运算符
//	Person& operator=(Person& p)
//	{
//		//应该先判断是否有属性在堆区，如果有先释放干净，再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);//深拷贝
//		//返回对象本身
//		return *this;
//	}
//	int* m_Age;
//};
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//	p2 = p1;
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
//#include <iostream>
//using namespace std;
//#include<string>
////类对象作为类成员
////C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
//
////手机类
//class Phone
//{
//public:
//	//Phone的构造函数
//	Phone(string pName)
//	{
//		cout << "Phone的构造函数调用" << endl;
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//	string m_PName;//手机品牌
//
//};
//class Person
//{
//public:
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	string m_Name;//姓名
//	Phone m_Phone;//电话
//	
//};
////当其他类对象作为本类成员，构造时先构造类对象，再构造自身
////析构的顺序与构造函数相反
//void test01()
//{
//	Person p("张三", "苹果MAX"); 
//	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
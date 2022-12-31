#include<iostream>
using namespace std;
#include<string>
//类模板作用：建立一个通用类，类中数据类型可以不具体制定，用虚拟的数据类型来代表

//类模板
//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << endl;
//		cout << "age: " << this->m_Age << endl;
//	}
//};
//
//void test01()
//{
//	Person<string, int>p1("孙悟空", 999);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
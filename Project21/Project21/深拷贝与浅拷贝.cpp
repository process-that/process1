//#include <iostream>
//using namespace std;
//#include<string>
//
////深拷贝与浅拷贝
////浅拷贝：简单的赋值拷贝操作
////深拷贝：在堆区重新申请空间，进行拷贝操作
//
//class Person 
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height=new int(height);
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//浅拷贝带来内存重复释放的问题
//	//自己实现拷贝构造函数解决浅拷贝带来的问题
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height=p.m_Height;编译器默认实现就是这行代码
//		//深拷贝操作
//		//重新在堆区开辟一块空间
//		m_Height = new int(*p.m_Height);//利用深拷贝解决浅拷贝问题
//	}
//	~Person()
//	{
//		//析构代码，将堆区开辟的数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_Age;//年龄
//	int* m_Height;//身高
//};
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1的年龄为：" <<p1.m_Age<<"身高为："<<*p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age <<"身高为："<<*p2.m_Height<< endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}
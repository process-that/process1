//#include<iostream>
//using namespace std;
//#include<string>
//
////this指针指向被调用的成员函数所属的对象
////this指针是隐含在每一个非静态成员函数内的一种指针
////this指针不需要被定义，直接使用即可
//
////this指针的用途
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;//this指针指向被调用的成员函数所属的对象
//	}
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		//this指向p2的指针，而*this指向的就是p2这个对象本体
//		return *this;
//	}
//		int age;
//};
////1.当形参和成员变量同名时，可用this指针来区分，解决名称冲突
//void test01()
//{
//	Person p1(18);
//    cout << "p1的年龄为：" << p1.age << endl;
//}
////2.返回对象本身 return *this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	//链式编程思想，可以无限往后追加
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	//如果函数执行完之后返回p2本身就能继续调用
//	cout << "p2的年龄为：" << p2.age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//
////thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
////thisָ����������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
////thisָ�벻��Ҫ�����壬ֱ��ʹ�ü���
//
////thisָ�����;
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//	}
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
//		return *this;
//	}
//		int age;
//};
////1.���βκͳ�Ա����ͬ��ʱ������thisָ�������֣�������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//    cout << "p1������Ϊ��" << p1.age << endl;
//}
////2.���ض����� return *this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	//��ʽ���˼�룬������������׷��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	//�������ִ����֮�󷵻�p2������ܼ�������
//	cout << "p2������Ϊ��" << p2.age << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
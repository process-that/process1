#include<iostream>
using namespace std;
#include<list>
#include<string>
//案例描述;将Person自定义数据类型进行排序，Person中属性有姓名，年龄，身高
//排序规则：按照年龄升序，如果年龄相同按照身高进行降序 
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;//姓名
	int m_Age;//年龄
	int m_Height;//身高
};

//指定排序规则
bool comparePerson(Person& p1, Person& p2)
{
	//按照年龄升序
	if (p1.m_Age == p2.m_Age)
	{
		//年龄相同按照身高降序
		return p1.m_Height > p2.m_Height;
	}
	return p1.m_Age < p2.m_Age;
}

void test01()
{
	list<Person>l;
	//准备数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);
	for (list<Person>::iterator it = l.begin();it != l.end();it++)
	{
		cout << "姓名为：" << (*it).m_Name << "年龄：" << (*it).m_Age << "身高 ：" << (*it).m_Height << endl;
	}
	//排序后
	cout << "-----------------" << endl;
	cout << "排序后:" << endl;
	l.sort(comparePerson);
	for (list<Person>::iterator it = l.begin();it != l.end();it++)
	{
		cout << "姓名为：" << (*it).m_Name << "年龄：" << (*it).m_Age << "身高 ：" << (*it).m_Height << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}
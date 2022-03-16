#include<iostream>
using namespace std;
#include<string>

//构造函数的分类及调用
//分类
//按照参数分类  无参构造和有参构造
//按照类型分类  普通构造  拷贝构造
class Person {
public:
	//构造函数
	Person() {
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p) {
		//将传入的人身上的所有属性拷贝到我身上
		cout << "Person的拷贝构造函数调用" << endl;
		age = p.age;
	}
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}
	int age;
};
//调用
void test01() {
	//1.括号法
	//Person p1;//默认构造函数调用
	//Person p2(10);//有参构造函数
	//Person p3(p2);//拷贝构造函数
	//cout << "p2的年龄：" << p2.age << endl;
	//cout << "p3的年龄：" << p3.age << endl;
	//2.显示法
	 Person p1;
	 Person p2 = Person(10);//有参构造
	 Person p3 = Person(p2);//拷贝构造
	//3.隐式转换法
	 Person p4 = 10;//相当于写了 Person p4=Person(10); 有参构造
	 Person p5 = p4;//拷贝构造
}
int main() {
	test01();
}
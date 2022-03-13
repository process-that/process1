#include<iostream>
using namespace std;
#include<string>
//类和对象

//const double PI = 3.14;
////设计一个圆类，求圆的周长
//class circle {
//	//访问权限
//public://公共权限
//	//属性
//	int m_r;//半径
//	//行为
//	//获取圆的周长
//	double calculateZC() {
//		return 2 * PI * m_r;
//	}
//
//
//};
//int main() {
//	//通过圆类，创建具体的圆
//	circle c1;
//	//给圆对象的属性赋值
//	c1.m_r = 10;
//	cout << "圆的周长为：" << c1.calculateZC() << endl;
//
//}

//练习案例
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以现实姓名和学号

//设计学生类
//class student {
//public:
//	//类中的属性和行为统一称为成员
//	//属性 成员属性 成员变量
//	//行为 成员函数 成员方法
//	string m_name;//姓名
//	int m_id;//学号
//	//行为
//	//显示姓名和学号
//	void showstudent() {
//		cout << "姓名：" << m_name << "学号：" << m_id << endl;
//	}
//};
//int main() {
//	//创建一个具体的学生
//	student s1;
//	s1.m_name = "张三";
//	s1.m_id = 1;
//	s1.showstudent();
//
//}

//访问权限
//公共权限 public 类内可以访问 类外可以访问
//保护权限 protected 类内可以访问 类外不可以访问
//私有权限 private  类内可以访问 类外不可以访问

//class person {
//public:
//	string m_name;
//protected:
//	string m_car;
//private:
//	int m_password;
//public:
//	void func() {
//		m_name = "张三";
//		m_car = "拖拉机";
//		m_password = 123456;
//	}
//};
//int main() {
//	person p1;
//	p1.m_name = "李四";
//	p1.m_car = "奔驰";//保护权限的内容在类外访问不到
//	p1.m_password = 123;//私有权限的内容在类外访问不到
//}
//
////struct和class的区别
////struct的默认权限是public
////class的默认权限是private

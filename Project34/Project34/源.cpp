#include <iostream>
using namespace std;

//继承实现页面
//继承的好处：减少重复代码
//class BasePage//公共页面类
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...(公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...(公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java，Python，C++...(公共分类列表)" << endl;
//	}
//};
////Java页
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
////Python页面
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java下载视频页面如下:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.content();
//	ja.left();
//	cout << "---------------------" << endl;
//	cout << "Python下载视频页面如下:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.content();
//	py.left();
//	cout << "-----------------------" << endl;
//	cout << "CPP下载视频页面内如下:" << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.content();
//	cp.left();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//继承方式
//公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限内容到子类中依然是公共权限
		m_B = 10;//父类中的保护权限到了子类中依然是保护权限
		//m_C = 10;//父类中私有权限成员 子类中访问不到
	}	
};
void test01() 
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//保护权限类外访问不到
}
//保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员，到子类中变为保护权限
		m_B = 100;
		//m_C = 100;私有内容子类访问不到
	}
};
void test02()
{
	Son2 s1;
	//s1.m_A = 1000;m_A变为保护权限因此类外访问不到
}

//私有继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员到子类中变为私有成员
		m_B = 100;//父类中保护成员到子类中变为私有成员
		//m_C = 100;父类中私有成员，子类访问不到
	}
};
void test02()
{
	Son3 s1;
	//s1.m_A = 1000;
}
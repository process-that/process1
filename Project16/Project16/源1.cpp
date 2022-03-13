//#include<iostream>
//using namespace std;
//#include<string>
//
////成员属性私有化
////优点1：将所有成员属性设置为私有，可以自己控制读写权限
////优点2：对于写权限，我们可以检测数据的有效性
//class person {
//public:
//	//设置姓名
//	void setName(string name) {
//		m_name = name;
//	}
//	//获取姓名
//	string getName() {
//		return m_name;
//	}
//	//获取年龄
//	int getage() {
//		//初始化为0
//		return m_age;
//	}
//	//设置年龄
//	void setage(int age) {
//		if (age < 0 || age>150) {
//			cout << "你这个老妖精" << endl;
//			return;
//		}
//		m_age = age;
//	}
//	//设置情人 只写
//	void setlover(string lover) {
//		m_lover = lover;
//	}
//private:
//	//姓名 可读可写
//	string m_name;
//	//年龄 只读
//	int m_age;
//	//情人 只写
//	string m_lover;
//};
//int main() {
//
//	person p;
//	p.setName("张三");
//	cout << "姓名为：" << p.getName() << endl;
//	p.setage(24);
//	cout << "年龄为：" << p.getage() << endl;
//	p.setlover("苍劲");
//	//cout << "情人为：" << p.m_lover << endl;//不可以访问
//	
//
//}
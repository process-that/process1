//#include<iostream>
//using namespace std;
//#include<string>
////友元的目的是让一个函数或者类访问另一个类中私有成员
////友元的关键字为friend
//
////友元的三种实现
////全局函数做友元
//class Building//房屋类
//{
//	//goodGay全局函数是Building的好朋友，可以访问Buildng中的私有成员
//	friend void goodGay(Building* building);
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//	string m_SittingRoom;//客厅
//private:
//	string m_BedRoom;//卧室
//};
//
////全局函数
//void goodGay(Building *building)
//{
//	cout << "好基友全局函数正在访问:" << building->m_SittingRoom << endl;
//	cout << "好基友全局函数正在访问:" << building->m_BedRoom << endl;
//}
//void test01()
//{
//	Building building;
//	goodGay(&building);
//}
//int main()
//{
//	test01();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//
////������Ԫ
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//public:
//	void visit();//�ιۺ��� ����Building�е�����
//	
//	Building* building;
//};
//class Building
//{
//	//GoodGay�Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
//	friend class GoodGay;
//public:
//	Building();
//public:
//	string m_SitingRoom;//����
//private:
//	string m_BedRoom;//����
//};
////����д��Ա����
//Building::Building()
//{
//	m_SitingRoom = "����";
//	m_BedRoom = "����";
//}
//GoodGay::GoodGay()
//{
//	//�������������
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "�û��������ڷ��ʣ�" << building->m_SitingRoom << endl;
//	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	return 0;
//}
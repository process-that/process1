//#include<iostream>
//using namespace std;
//#include<string>
////��Ԫ��Ŀ������һ�����������������һ������˽�г�Ա
////��Ԫ�Ĺؼ���Ϊfriend
//
////��Ԫ������ʵ��
////ȫ�ֺ�������Ԫ
//class Building//������
//{
//	//goodGayȫ�ֺ�����Building�ĺ����ѣ����Է���Buildng�е�˽�г�Ա
//	friend void goodGay(Building* building);
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//	string m_SittingRoom;//����
//private:
//	string m_BedRoom;//����
//};
//
////ȫ�ֺ���
//void goodGay(Building *building)
//{
//	cout << "�û���ȫ�ֺ������ڷ���:" << building->m_SittingRoom << endl;
//	cout << "�û���ȫ�ֺ������ڷ���:" << building->m_BedRoom << endl;
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
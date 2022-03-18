#include<iostream>
using namespace std;
#include<string>
#define MAX 1000
//ͨѶ¼ϵͳ
//��Ҫʵ�ֵĹ�������
//�����ϵ��:��Ϣ�������������Ա����䣬��ϵ�绰����ͥסַ��������¼1000��
//��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
//ɾ����ϵ�ˣ���������ɾ��ָ����ϵ��
//������ϵ�ˣ�������������ָ����ϵ��
//�޸���ϵ�ˣ����������޸�ָ����ϵ����Ϣ
//�����ϵ�ˣ����ͨѶ¼��������Ϣ
//�˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼

//��ϵ�˽ṹ��
struct Person {
	//����
	string m_Name;
	//�Ա�  1 �� 2  Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};
//ͨѶ¼�ṹ��
struct Addressbooks {
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};
//1.�����ϵ��
void addPerson(Addressbooks* abs) {
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼�����޷�������û��ˣ�" << endl;
		return;
	}
	else {
		//��Ӿ�����ϵ��
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�:" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		while (true) 
		{
			cin >> sex;//�������1����2�����˳�ѭ������������������һֱѭ��
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		cout << "������绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		system("pause");//�밴���������
		system("cls");//��������
	}
}

//2.��ʾ��ϵ��
void showPerson(Addressbooks *abs) {
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0) {
		cout << "��ǰ�ļ�¼Ϊ��" << endl;
	}
	else {
		for (int i = 0;i < abs->m_Size;i++)
		{
			cout << "������ " << abs->personArray[i].m_Name << "\t";
			cout << "���䣺 " << abs->personArray[i].m_Age << "\t";
			cout << "�Ա� " << (abs->personArray[i].m_Sex==1?"��":"Ů")<< "\t";
			cout << "�绰�� " << abs->personArray[i].m_Phone << "\t";
			cout << "סַ�� " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");//��������
}

// �����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���1
int isExist(Addressbooks *abs, string name) {//����1 ͨѶ¼ ����2 �Ա�����
	for (int i = 0;i < abs->m_Size;i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;//�������������û���ҵ�����-1
}
//3.ɾ��ָ����ϵ��
void deletePerson(Addressbooks *abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret=isExist(abs, name);
	if (ret != -1)
	{//���ҵ��˽���ɾ������
		for (int i = ret;i < abs->m_Size;i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//4.����ָ����ϵ��
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	//�ж�ָ����ϵ���Ƿ������ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������ " << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա� " << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺 " << abs->personArray[ret].m_Age << "\t";
		cout << "�绰�� " << abs->personArray[ret].m_Phone << "\t";
		cout << "��ַ�� " << abs->personArray[ret].m_Addr << endl;;
	}
	else//δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
} 
//5.�޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//�޸�����
		string name;
		cout << "����������:" << endl;
		cin >> name;
		abs->personArray[ret].m_Name =name;
		//�޸��Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}
		//�޸�����
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//�޸ĵ绰
		cout << "������绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//�޸ĵ�ַ
		cout << "������һ����ַ" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//6.���������ϵ��
void cleanPerson(Addressbooks *abs)
{
	abs->m_Size = 0;//����ǰ��ϵ��������Ϊ0,���߼��ϵ����
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
//�˵�����
//�����������û�ѡ���ܵĽ���
//�˵�����
void shouMenu() {
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
}
//�˳�����
//�����������˳�ͨѶ¼ϵͳ
//˼·�������û���ͬ��ѡ�񣬽��벻ͬ�Ĺ��ܣ�����ѡ��switch��֧�ṹ
//���û�ѡ��0ʱִ���˳���ѡ���������������˳�
int main() {
	//����һ��ͨѶ¼�Ľṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;
	int select = 0;//�����û�ѡ������ı���
	while (true) {
		//�˵�����
		shouMenu();
		cin >> select;
		switch (select) {
		case 1://�����ϵ��
			addPerson(&abs);//���õ�ַ���ݿ����޸�ʵ��
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
		/*{
			cout << "������ɾ����ϵ�˵�����" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�ҵ�����" << endl;
			}
		} */
			deletePerson(&abs);
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
		return 0;
	}


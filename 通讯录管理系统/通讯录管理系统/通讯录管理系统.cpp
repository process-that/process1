#include<iostream>
using namespace std;
#include<string>
#define MAX 1000
//通讯录系统
//需要实现的功能如下
//添加联系人:信息包括（姓名，性别，年龄，联系电话，家庭住址），最多记录1000人
//显示联系人：显示通讯录中所有联系人信息
//删除联系人：按照姓名删除指定联系人
//查找联系人：按照姓名查找指定联系人
//修改联系人：按照姓名修改指定联系人信息
//清空联系人：清空通讯录中所有信息
//退出通讯录：退出当前使用的通讯录

//联系人结构体
struct Person {
	//姓名
	string m_Name;
	//性别  1 男 2  女
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};
//通讯录结构体
struct Addressbooks {
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_Size;
};
//1.添加联系人
void addPerson(Addressbooks* abs) {
	//判断通讯录是否已满，如果满了就不再添加
	if (abs->m_Size == MAX) {
		cout << "通讯录已满无法再添加用户了！" << endl;
		return;
	}
	else {
		//添加具体联系人
		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		cout << "请输入性别:" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		while (true) 
		{
			cin >> sex;//如果输入1或者2可以退出循环。输入错误的数字则一直循环
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		cout << "请输入电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		cout << "请输入家庭住址" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功" << endl;
		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
}

//2.显示联系人
void showPerson(Addressbooks *abs) {
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0) {
		cout << "当前的记录为空" << endl;
	}
	else {
		for (int i = 0;i < abs->m_Size;i++)
		{
			cout << "姓名： " << abs->personArray[i].m_Name << "\t";
			cout << "年龄： " << abs->personArray[i].m_Age << "\t";
			cout << "性别： " << (abs->personArray[i].m_Sex==1?"男":"女")<< "\t";
			cout << "电话： " << abs->personArray[i].m_Phone << "\t";
			cout << "住址： " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");//清屏操作
}

// 检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回1
int isExist(Addressbooks *abs, string name) {//参数1 通讯录 参数2 对比姓名
	for (int i = 0;i < abs->m_Size;i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;//如果遍历结束都没有找到返回-1
}
//3.删除指定联系人
void deletePerson(Addressbooks *abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;
	int ret=isExist(abs, name);
	if (ret != -1)
	{//查找到人进行删除操作
		for (int i = ret;i < abs->m_Size;i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//更新通讯录中的人员数
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//4.查找指定联系人
void findPerson(Addressbooks* abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;
	//判断指定联系人是否存在在通讯录中
	int ret = isExist(abs, name);
	if (ret != -1)//找到联系人
	{
		cout << "姓名： " << abs->personArray[ret].m_Name << "\t";
		cout << "性别： " << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄： " << abs->personArray[ret].m_Age << "\t";
		cout << "电话： " << abs->personArray[ret].m_Phone << "\t";
		cout << "地址： " << abs->personArray[ret].m_Addr << endl;;
	}
	else//未找到联系人
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
} 
//5.修改指定联系人信息
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//修改姓名
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->personArray[ret].m_Name =name;
		//修改性别
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误请重新输入";
		}
		//修改年龄
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//修改电话
		cout << "请输入电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//修改地址
		cout << "请输入一个地址" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//6.清空所有联系人
void cleanPerson(Addressbooks *abs)
{
	abs->m_Size = 0;//将当前联系人数量置为0,做逻辑上的清空
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
//菜单功能
//功能描述：用户选择功能的界面
//菜单界面
void shouMenu() {
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
}
//退出功能
//功能描述：退出通讯录系统
//思路：根据用户不同的选择，进入不同的功能，可以选择switch分支结构
//当用户选择0时执行退出，选择其他操作不会退出
int main() {
	//创建一个通讯录的结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;
	int select = 0;//创建用户选择输入的变量
	while (true) {
		//菜单调用
		shouMenu();
		cin >> select;
		switch (select) {
		case 1://添加联系人
			addPerson(&abs);//利用地址传递可以修改实参
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
		/*{
			cout << "请输入删除联系人的姓名" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "找到此人" << endl;
			}
		} */
			deletePerson(&abs);
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			cleanPerson(&abs);
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
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


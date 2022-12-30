#include <iostream>
using namespace std;

//��̬����2 ������Ʒ
class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PutInCup() = 0;
	//���븨��
	virtual void PutSomeThing() = 0;
	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PutInCup();
		PutSomeThing();
	}
};
//������������
class Coffee:public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void PutInCup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomeThing()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//������Ҷ
class Tea :public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void PutInCup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomeThing()
	{
		cout << "�����Ҷ" << endl;
	}
};
//��������
void doWork(AbstractDrinking *abs)
{
	abs->makeDrink();
	delete abs;
}
void test01()
{
	//��������
	doWork(new Coffee);
	cout << "-----------------" << endl;
	//������Ҷ
	doWork(new Tea);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<string>

//���캯���ķ��༰����
//����
//���ղ�������  �޲ι�����вι���
//�������ͷ���  ��ͨ����  ��������
class Person {
public:
	//���캯��
	Person() {
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p) {
		//������������ϵ��������Կ�����������
		cout << "Person�Ŀ������캯������" << endl;
		age = p.age;
	}
	~Person() {
		cout << "Person��������������" << endl;
	}
	int age;
};
//����
void test01() {
	//1.���ŷ�
	//Person p1;//Ĭ�Ϲ��캯������
	//Person p2(10);//�вι��캯��
	//Person p3(p2);//�������캯��
	//cout << "p2�����䣺" << p2.age << endl;
	//cout << "p3�����䣺" << p3.age << endl;
	//2.��ʾ��
	 Person p1;
	 Person p2 = Person(10);//�вι���
	 Person p3 = Person(p2);//��������
	//3.��ʽת����
	 Person p4 = 10;//�൱��д�� Person p4=Person(10); �вι���
	 Person p5 = p4;//��������
}
int main() {
	test01();
}
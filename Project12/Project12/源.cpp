#include<iostream>
using namespace std;
#include <string>
#include<ctime> 
//int main() {
//	//�ṹ��
//	//�﷨��struct �ṹ����{�ṹ���Ա�б�}
//	//1������һ��ѧ������������:ѧ���������� ���� ����
//	struct student {
//		string name;
//		int age;
//		int score;
//	};
//
//	//2,ͨ��ѧ�����ʹ�������ѧ��
//	//1.struct student s1;
//	struct student s1 ;
//	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
//	s1.name = "����";
//	s1.age = 18;
//	s1.score = 100;
//	cout << "����" << s1.name << "����" << s1.age << "�ɼ�" << s1.score << endl;
//	//2,struct student s2={...}
//	struct student s2 = { "����",19,80 };
//	cout << "����" << s2.name << "����" << s2.age << "�ɼ�" << s2.score << endl;
//	//3,�ڶ���ṹ��ʱ˳�㴴���ṹ�����
//	return 0;
//}
//�ṹ������

	//���ã����Զ���Ľṹ��ŵ������з���ά��
	//�﷨��struct �ṹ���� ������{Ԫ�ظ���}={{}{}{}}
	//1.����ṹ��
	//struct student {
	//	string name;
	//	int age;
	//	int score;
	//};
	//int main() {
	//	//2,�����ṹ������
	//	struct student stuarray[3] = {
	//		{"����",18,100},
	//		{"����",19,80},
	//		{"����",34,87}
	//	};
	//	//3,���ṹ�������е�Ԫ�ظ�ֵ
	//	stuarray[2].name = "����";
	//	stuarray[2].age = 80;
	//	stuarray[2].score = 60;
	//	//4,��������
	//	for (int i = 0;i < 3;i++) {
	//		cout << "����" << stuarray[i].name << "����" << stuarray[i].age << "�ɼ�" << stuarray[i].score << endl;
	//	}
	//	return 0;
	//}

//�ṹ��ָ��
//struct student {
//	string name;
//	int age;
//	int score;
//};
//int main() {
//	//���ã�ͨ��ָ����ʽṹ���еĳ�Ա
//	//���ò�����->����ͨ���ṹ��ָ����ʽṹ������
//	//1.�����ṹ����
//	struct student s = { "����",18,100 };
//	//2.ͨ��ָ��ָ��ṹ�����
//	struct student* p = &s;
//	//3.ͨ��ָ����ʽṹ������е�����
//	cout << "������" << p->name << "���䣺" << p->age << "�ɼ���" << p->score << endl;
//	return 0;
//}

//�ṹ��Ƕ�׽ṹ��
//���ã��ṹ���еĳ�Ա��������һ���ṹ��
//���磺ÿ����ʦ����һ��ѧ����һ����ʦ�Ľṹ���м�¼��һ��ѧ���Ľṹ��

//����ѧ���ṹ��
//struct student {
//	string name;
//	int age;
//	int score;
//};
////������ʦ�ṹ��
//struct teacher {
//	int id;
//	string name;
//	int age;
//	struct student stu;//ѧ���Ľṹ��
//};
//int main() {
//	teacher t;
//	t.id = 1000;
//	t.age = 50;
//	t.name = "����";
//	t.stu.name = "С��";
//	t.stu.age = 18;
//	t.stu.score = 90;
//	cout << "��ʦ������ " << t.name << "��ʦ���䣺 " 
//		<< t.age << "��ʦ��ţ� " << t.id << "��ʦ������ѧ�������� " << t.stu.name << "ѧ�����䣺 " << t.stu.age << "ѧ���ĳɼ��� " << t.stu.score << endl;
//	return 0;
//}

//�ṹ������������
//����;���ṹ����Ϊ���������д���
//����ѧ���ṹ��
//struct student {
//	string name;
//	int age;
//	int score;
//};
////��ӡѧ��������Ϣ�ĺ���
////ֵ����
//void printstudent(struct student s) {
//	cout << "�Ӻ����� ������ " << s.name << "���䣺 " << s.age << "������ " << s.score << endl;
//}
////��ַ����
//void printstudent2(struct student *p) {
//	cout << "�Ӻ���2������ ��" << p->name << "���� ��" << p->age << "������ " << p->score<< endl;
//}
//int main() {
//	//�ṹ������������
//	//��ѧ�����뵽һ�������У���ӡѧ���������е���Ϣ
//	//�����ṹ�����
//	struct student s;
//	s.name = "����";
//	s.age = 18;
//	s.score = 80;
//	printstudent(s);
//	printstudent2(&s);
//	return 0;
//}

//�ṹ�尸��
//����������ѧУ������������Ŀ,ÿ����ʦ����5��ѧ�����ܹ���������ʦ�������£�
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ���������ѧ����������Ϊ��Ա
//ѧ���ĳ�Ա�����������Է���������������������ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//���մ�ӡ��ʦ�����Լ���ʦ������ѧ������

//����ѧ���Ľṹ��
struct student {
	string sname;
	int score;
};
//��ʦ�Ľṹ�嶨��
struct teacher {
	string tname;
	struct student sarray[5];
};
//����ʦ��ѧ����ֵ�ĺ���
void allocatespace(struct teacher tarray[],int len) {
	string nameseed = "ABCDE";
	for (int i = 0;i < len;i++) {
		tarray[i].tname = "Teacher_";
		tarray[i].tname += nameseed[i];
		//ͨ��ѭ����ÿ����ʦ����ѧ����ֵ
		for (int j = 0;j < 5;j++) {
			tarray[i].sarray[j].sname = "Student_";
			tarray[i].sarray[j].sname += nameseed[j]; 
			int random = rand() % 61+40;
			tarray[i].sarray[j].score = random;
		}
		
	}
}
//��ӡ������Ϣ
void printinfo(struct teacher tarray[], int len) {
	for (int i = 0;i < len;i++) {
		cout << "��ʦ������" << tarray[i].tname << endl;
		for (int j = 0;j < 5;j++) {
			cout << "\tѧ�������� " << tarray[i].sarray[j].sname << " ���Է�����" << tarray[i].sarray[j].score << endl;
		}
	}
}
int main() {
	srand((unsigned int)time(NULL));
	//1.����������ʦ������
	struct teacher tarray[3];
	//2.ͨ��������������ʦ����Ϣ��ֵ�����Ҹ���ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allocatespace(tarray, len); 
	printinfo(tarray,len);
		//3.��ӡ������ʦ��������ѧ��
	return 0; 
}
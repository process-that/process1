#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���

//����һ��ѧ������
//����
//����
//�绰
//�Ա�
//struct Stu//struct-�ṹ��ؼ��� Stu-�ṹ���ǩ  struct Stu-�ṹ������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};//�ṹ���������Ҫ�ӷֺ�
//int main()
//{
//	struct Stu s = { "����",20,"110","��" };//�ṹ��ĳ�ʼ��
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"helloworld",3.14},arr };//�ṹ��Ƕ��
//	printf("%s\n", t.ch);
//	printf("%d\n", t.s.a);
//	return 0;
//}
typedef struct Stu//struct-�ṹ��ؼ��� Stu-�ṹ���ǩ  struct Stu-�ṹ������
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)//��һ�ַ���
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void Print2(Stu* ps)//�ڶ��ӷ������ڶ��ַ�������
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = { "����",24,"123","��" };
	Print1(s);
	Print2(&s);
	return 0;
}
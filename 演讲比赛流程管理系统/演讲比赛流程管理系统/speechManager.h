#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include "speaker.h"
#include<algorithm>
#include<deque>
#include<numeric>
#include<fstream>
//����ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();
	//�˵�����
	void show_Menu();
	//�˳�ϵͳ
	void exitSystem();
	//��������
	~SpeechManager();
	//��ʼ������������
	void initSpeech();
	//����12��ѡ��
	void createSpeaker();
	//��ʼ�����������������̵Ŀ��ƺ���
	void startSpeech();
	//��ǩ
	void speechDraw();
	//����
	void speechContest();
	//��ʾ�÷�
	void showScore();
	//�������
	void saveRecord();
	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������
	vector<int>v1;
	//��һ�ֽ�������ѡ�ֱ������
	vector<int>v2;
	//ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;
	//��ű���Լ���Ӧ����ѡ������
	map<int, Speaker>m_Speaker;
	//��ű�������
	int m_Index;
};
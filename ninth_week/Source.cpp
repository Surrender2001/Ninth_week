#include<iostream>
#include<fstream>
#include<string>
#include<queue>
#include<sstream>
#include<vector>
#include<map>
#include"QueueP.h"
using namespace std;



int main()
{
	const int N = 256;
	setlocale(LC_ALL, "Russian");
	string path = "myFile.txt",str="";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())cout << "������ �������� �����" << endl;
	else
	{
		cout << "���� ������" << endl;
		getline(fin, str);
	}
	fin.close();

	


	//char S[N] = "Hello, i am string\nHow are you?\n-All OK!";  //������-�����������
	char word[N] = {};          //����� ��� ���������� ������
	vector<string> words;
	stringstream x;        //�������� ��������� ����������
	x << str;                //������� ������ � �����

	while (x >> word)
	{
		words.push_back(word);
		//cout << word << '\n';//������� ����
	}

	int n = 1;
	map<string, int> slovar;
	priority_queue<string> q;

	for (auto word:words)
	{
		cout << word << " ";
	}
	cout << endl;

	for (int i=0;i<words.size()-1;i++)
	{
		for (int j = i+1; j < words.size(); j++)
		{
			if (words[i] == words[j])
			{
				n++;
			}
		}

		cout <<words[i]<<"\tn= " << n << endl;		
		auto it = slovar.find(words[i]);
		if (it == slovar.end())
		{
			slovar.emplace(words[i], n);
		}
		n = 1;
	}

	for (auto& item : slovar)
	{
		cout << item.first << " : " << item.second << endl;
	}
	QueueP<string> Q1;
	
	for (auto& item : slovar)
	{
		Q1.Push(item.first,item.second);
	}

	Q1.Print("Q1");
	return 0;
}
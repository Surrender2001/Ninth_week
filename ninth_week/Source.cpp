#include<iostream>
#include<fstream>
#include<string>
#include<queue>
#include<sstream>
#include<vector>
#include<map>
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
		//cout << str << endl;
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

	priority_queue<string,vector<string>> q;
	for (auto str: words)
	{
		cout << str << " ";
	}


	return 0;
}
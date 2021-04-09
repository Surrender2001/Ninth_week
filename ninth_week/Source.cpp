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
	if (!fin.is_open())cout << "Ошибка открытия файла" << endl;
	else
	{
		cout << "Файл открыт" << endl;
		getline(fin, str);
		//cout << str << endl;
	}
	fin.close();

	


	//char S[N] = "Hello, i am string\nHow are you?\n-All OK!";  //Строка-предложение
	char word[N] = {};          //Буфер для считывания строки
	vector<string> words;
	stringstream x;        //Создание потоковой переменной
	x << str;                //Перенос строки в поток

	while (x >> word)
	{
		words.push_back(word);
		//cout << word << '\n';//выборка слов
	}

	priority_queue<string,vector<string>> q;
	for (auto str: words)
	{
		cout << str << " ";
	}


	return 0;
}
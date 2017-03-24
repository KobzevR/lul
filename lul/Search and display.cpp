#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <string>

using namespace std;

void SearchGroup()
{
	int check1 = 1;
	while (check1) {
		cout << "Enter the name of group" << endl;
		string name, group;
		bool check = 0;
		cin >> name;
		ifstream fin("registry.txt");
		while (!fin.eof())
		{
			fin >> group;
			if (group == name) { check = 1; fin.close(); }
		}
		fin.close();
		if (!check) cout << "Group isn't exists"<<endl;
		else
		{
			name = name + ".txt";
			string student;
			ifstream ffin(name);
			while (!ffin.eof())
			{
				ffin >> student;
				cout << student << endl;
			}
			ffin.close();
		}
		cout << "1-Continue 0-Stop";
		cin >> check1;
	}
}

int main()
{
	SearchGroup();
	system("PAUSE");
	return 0;
}
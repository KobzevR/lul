#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <string.h>

#include <string>

using namespace std;

void out(string name)
{
	string nnnn = "registry.txt";
	ofstream nfout(nnnn);
	nfout << name << '\n';
	nfout.close();
}

void make_group()
{
	cout << "Enter the name of group" << endl;
	char name[20], nnn[5] = ".txt";
	cin >> name;
	string nnn1 = nnn, name1 = name, nname = name + nnn1;
	ofstream fout(nname);
	cout << "Enter the data name/id/tel/deads. 1-Continue 0-Stop" << endl;
	string data; int a = 1;
	while (a)
	{
		cin >> data;
		fout << data << '\n';
		cin >> a;
	}
	fout.close();
	out(name1);

}



int main()
{
	make_group();
	system("PAUSE");
	return 0;
}
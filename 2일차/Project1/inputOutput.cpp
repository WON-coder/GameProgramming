#include<iostream>
#include<fstream>
//#include<ostream>
//#include<istream>

using namespace std;

int main() {
	ifstream ftxt;
	string s;
	ftxt.open("readme.txt");

	ftxt >> s;
	ftxt.get();

	ftxt.close();

	ofstream otxt;
	string str;

	otxt.open("tmp.txt");
	cin >> str;
	otxt << str;

	otxt.close();
	return 0;
}
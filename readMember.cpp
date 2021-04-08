#include ",.h"

void Member::readMember(){
	cout << "ReadMember ran.\n";
	ifstream in;
	in.open("testMember.txt");
	getline(in,name);
	in >> ID;
	in.ignore();
	string temp;
	getline(in,temp);
	if (temp[0]=='E')
		premium = true;
	else
		premium = false;
	getline(in,expirationDate);
}

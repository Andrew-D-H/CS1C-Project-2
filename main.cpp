#include ",.h"

int main(){
	cout << "Hello, world!\n";
	//vector<Member> members;
	
	Member tmp;
	cout << tmp.name << endl;
	tmp.readMember();
	cout << tmp.name << endl;
	cout << tmp.ID << endl;
	cout << tmp.premium << endl;
	cout << tmp.expirationDate << endl;

	Member lst;
	cout << lst.name << endl;
	lst.readMember();
	cout << lst.name << endl;
	cout << lst.ID << endl;
	cout << lst.premium << endl;
	cout << lst.expirationDate << endl;

	return 0;
}

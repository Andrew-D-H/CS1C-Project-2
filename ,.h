#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#define cndl cout<<endl

using namespace std;

struct Sales{
	string datePurchased;
	float costOfProduct;
	int quantityPurchased;
};

class Member{
	public:
	string name = "Defaultname";
	int ID;
	bool premium;
	string expirationDate;
	double amountSpent;
	double rebateAmount;
	vector<Sales> purchases;
	public:
	void readMember();
	/*
	double calculateRebate();
	double calcAmountSpent();
	void updateSales();
	*/
};

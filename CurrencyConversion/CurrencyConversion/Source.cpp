#include <string>
#include <iostream>
using namespace std;


int main()
{

	float AmericanDollars;
	float BritishPounds;
	float MexicanPesos;
	float JapeneseYen;

	cout << " how much american money would you like to see be converted into other money? ";
	cin >> AmericanDollars;

	BritishPounds = AmericanDollars * .6318;
	MexicanPesos = AmericanDollars * 12.8863;
	JapeneseYen = AmericanDollars * 82.34;

	cout << " Mexican pesos " << MexicanPesos;

	cout << " \n British pounds " << BritishPounds;

	cout << " \n Japanese yen " << JapeneseYen << "\n";

	system("pause");
	return 0;
}
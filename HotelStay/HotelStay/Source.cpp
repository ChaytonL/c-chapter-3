#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double DaysStayed;
	double RoomCharge;
	double InternetCharge;
	double TotalBill;


	cout << " What is your name? ";
	cin >> name;

	cout << " How many days will you be staying with us? ";
	cin >> DaysStayed;

	RoomCharge = 120 * DaysStayed;
	InternetCharge = 9.99 * DaysStayed;
	TotalBill = RoomCharge + InternetCharge;

	cout << " Yeahhhhhhhhhh Boyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy " << endl;

	cout << " Your total will be $" << TotalBill << " for staying with us for " << DaysStayed << " nights. Thanks for staying with us "
		<< name << endl;

	cout << " Yeahhhhhhhhhh Boyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy " << endl;


	system("pause");
	return 0;

}

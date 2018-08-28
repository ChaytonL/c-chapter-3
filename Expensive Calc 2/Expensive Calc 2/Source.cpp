#include <string>
#include <iostream>
using namespace std;


int main()
{
	string namestring;

	int firstnum;
	int secondnum;
	int add;
	int subtract;
	int divide;
	int multiply;
	int remainder;

	cout << "what is your name? ";
	cin >> namestring;

	cout << "what is your first number? ";
	cin >> firstnum;

	cout << "Please enter a second number ";
	cin >> secondnum;

	add = firstnum + secondnum;
	cout << "The sum of " << firstnum << " and " << secondnum << " = " << add << endl;

	subtract = firstnum - secondnum;
	cout << "The difference of " << firstnum << " and " << secondnum << " = " << subtract << endl;

	divide = firstnum / secondnum;
	cout << "The divide of " << firstnum << " and " << secondnum << " = " << divide << endl;

	multiply = firstnum * secondnum;
	cout << "The multiply of " << firstnum << " and " << secondnum << " = " << multiply << endl;

	remainder = firstnum % secondnum;
	cout << "The remainder of " << firstnum << " and " << secondnum << " = " << remainder << endl;





	system("pause");

	return 0;
}
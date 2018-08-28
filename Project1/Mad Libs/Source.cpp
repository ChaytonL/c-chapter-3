#include <string>
#include <iostream>
using namespace std;


int main()
{
	string color;
	string ESTname;
	string Pluralbodypart;
	string animal;
	string noun;
	string pluralnoun;

	int a;
	int b;
	int c;

	
	
	cout << " please enter a color ";
	cin >> color;

	cout << " please enter a word ending in est ";
	cin >> ESTname;

	cout << " please enter a body part plural ";
	cin >> Pluralbodypart;

	cout << " please enter an animal";
	cin >> animal;

	cout << " please enter a noun ";
	cin >> noun;

	cout << " please enter a noun plural ";
	cin >> pluralnoun;

	cout << " please enter a number ";
	cin >> a;

	cout << " please enter another number ";
	cin >> b;

	c = a - b;

	cout << " The " << color << " dragon is the " << ESTname <<
		" Dragon of all. It has " << c << Pluralbodypart << " and a \n" << animal << " shaped like a " << noun <<
		" It loves to eat " << pluralnoun << "although it will feast on nearly anything ";

	system("pause");
	return 0;
	
}
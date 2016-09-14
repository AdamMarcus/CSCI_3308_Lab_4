#include <iostream>

using namespace std;

int main ()
{
	cout << "Hello New User! What is your name?" << endl;
	string name;
	cin >> name;
	cout << "Good day " << name << endl;
	cout << "What is Rachel's favorite color?" << endl;
	string color;
	cin >> color;
	if (color == "pink" || color == "Pink")
	{
		cout  << "You are correct!" << endl;
	}
	else
	{
		cout << "WRONG" << endl;
	}
	cout << "What is Rachel's second favorite color?" << endl;
	cin >> color;
	if (color == "maroon" || color == "Maroon")
	{
		cout  << "You are correct!" << endl;
	}
	else
	{
		cout << "WRONG AGAIN!! GET TO KNOW RACHEL BETTER" << endl;
	}
	return 0;
}

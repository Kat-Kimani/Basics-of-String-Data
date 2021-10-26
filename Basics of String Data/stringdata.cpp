
#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "Capturing String Data Type and Limitation of cinn>> : \n";
	string myName;
	cout << " Input your full name : ";

	//getline will output both names i.e Catherine Kimani
	getline (cin, myName);

	//cin>> will output Catherine only
	//cin>>myName;
	cout << "\n";
	cout << "Hey, Your name using cin>> is :" << myName << endl;
	cout << "Hey, your Name using getline () function is :" << myName << endl;

	//input full name : Catherine Kimani
	//Hey, your name is : Catherine

	return 0;
}
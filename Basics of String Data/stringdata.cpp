
#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "Capturing String Data Type and Limitation of cinn>> : \n";
	string cinmyname;
	string getlinemyname;

	cout << " Type in your full name : ";
	getline (cin, getlinemyname);

	cout << " Type in your full name : ";
	cin >> cinmyname;

	//cin>> will output Catherine only
	// getline  will output Catherine Kimani
	cout << "\n";
	cout << "Hey, Your name using cin>> is :" << cinmyname << endl;
	cout << "Hey, your Name using getline () function is :" << getlinemyname << endl;


	return 0;
}
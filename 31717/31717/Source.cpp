#include <iostream>
#include <string>
using namespace std;
int main() {

	string input;
	string item[4];


	cout << "give me four words" << endl;
	for (int i = 0; i < 4; i++)
		cin >> item[i];

	if (item[2] == "shamrock")
		cout << "You get the gold" << endl;
	
	else
		cout << "Go away" << endl;
}





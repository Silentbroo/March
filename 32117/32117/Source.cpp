#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
	cout << "enter your favorite games, scrub:" << endl;

	string input[5];
	for (int i = 0; i < 5; i++) {
		cin >> input[i];

		if (input[i].compare("Minecraft") == 0 || input[i].compare("Shrek game") == 0)
			cout << "Youre a cool kid" << endl;
		if (input[i].compare("Naruto") == 0 || input[i].compare("DBZ") == 0)
			cout << "Youre a cool kid" << endl;
		if (input[i].compare("Pokemon") == 0)
			cout << "Youre a cool kid" << endl;
		else
			cout << "Eat sochuenns ugly foo foo pants shorts" << endl;
	}
	cout << "your favorite games are:" << endl;
	for (int i = 0; i < 5; i++)
		cout << input[i] << endl;

	cout << "I'm deaaad." << endl;

}
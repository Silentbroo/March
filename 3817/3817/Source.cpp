#include<iostream>
using namespace std;
int main() {
	int count = 0;
	char input;
	cout << "Why do you press b so much? Dont you dare touch it!." << endl;
	cin >> input;
	while (input == 'b') {
		count++;
		cin >> input;
	}
	cout << "Wow,you don't know how to listen" << endl;
	cout << "You pressed b like " << count << " times." << endl;
}
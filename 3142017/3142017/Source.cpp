#include <iostream>
using namespace std;
int main() {
	int MaxVal = 0;
	int num;
	for (int i = 0; i < 3; i++) {
		cout << "enter number" << endl;
		cin >> num;
		if (num > MaxVal)
			MaxVal = num;
	}
	cout << "the highest is" << endl;
}

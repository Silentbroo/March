#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
void Badguy();
int main() {
	srand(static_cast<unsigned int>(time(0)));
	while (1) {
		Badguy();
		system("Pause");
	}
}
void Badguy() {
	int enemy = rand() % 100 + 1;
	if (enemy > 50)
		cout << "You've encountered a goomba!" << endl;
	if (enemy < 50 && enemy > 20)
		cout << "You've encountered a koopa!" << endl;
	if (enemy < 20)
		cout << "You've encountered a Shy guy!" << endl;
}
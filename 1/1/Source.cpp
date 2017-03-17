
#include <iostream>
#include <string>
#include <Windows.h>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
void monster(int health);
int main() {
	int room = 1;
	int number = 0;
	string input;
	string item[4];
	int RandomNumber;
	int Inventory();
	srand(static_cast<unsigned>(time(0)));
	RandomNumber = rand();
	int health = 100;
	system("Color 1A");

	cout << "When project 126 goes wrong you hear them but cant wake up.." << endl;
	PlaySound(TEXT("techno.wav"), NULL, SND_FILENAME);
	while (input != "quit") {
		switch (room) {
		case 1:

			cout << "You are in the safe room " << endl;
			cout << "you can now go North, East, South, and West" << endl;
			if (item[1].compare("flashlight") != 0)//if there's NO flashlight in their items
				cout << "you see a flashlight on the floor" << endl; //say it's in the room
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 4;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 9;
			else if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 2;
			else if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 7;
			if (input.compare("flashlight") == 0) { //if they ask for the flashlight, put it in their inventory


				item[1] = "flashlight"; //put in inventory
				cout << "You grabbed the flashlight!" << endl;
			}



			break;
		case 2:

			cout << "You are in a room that is really bright!" << endl;
			cout << "" << endl;
			cout << "you can go West, North, and South" << endl;
			monster(health);
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 3;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 11;
			else if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 1;


			break;




		case 3:


			cout << "Ahhh you've enter into a doll room!" << endl;
			cout << "you can go West or South" << endl;
			monster(health);
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 4;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 2;


			break;




		case 4:


			cout << "You are in room full of boxes...you herd a small noise." << endl;
			cout << "You can go North, East, South, and West" << endl;
			monster(health);
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 6;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 1;
			else if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 3;
			else if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 5;
			break;
		case 5:

			cout << "... You have died" << endl;
			input = "quit";//allow the game to stop
			break;
		case 6:


			cout << "du di da... a movie has started to play" << endl;
			cout << "you can go East or South" << endl;
			monster(health);
			cin >> input;
			if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 7;
			else if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 4;
			break;
		case 7:

			cout << "brrr.. the temperature has dropped" << endl;
			cout << "you can go East or South" << endl;
			monster(health);
			cin >> input;
			if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 1;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 8;
			break;
		case 8:

			cout << "All of a sudden it became pitch black" << endl;
			if (item[2].compare("doorknob") != 0)
				cout << "there's something shining it looks like a doorknob grab it" << endl;
			cout << "you can go East or North" << endl;
			monster(health);
			cin >> input;
			if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 9;
			else if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 7;
			if (input.compare("doorknob") == 0) {


				item[2] = "doorknob";
				cout << "You grabbed the doorknob!" << endl;
			}


			break;
		case 9:


			cout << "Woah its like you're in a galaxy" << endl;
			if (item[3].compare("key") != 0)
				cout << "there's a key on one of the doors grab it" << endl;
			cout << "you can go North, South, East, or West" << endl;
			monster(health);
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 1;
			else if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 11;
			else if (input.compare("south") == 0 || input.compare("go south") == 0) {
				if (item[3].compare("key") == 0 && item[2].compare("doorknob") == 0) {
					cout << "you unlocked the door" << endl;
					room = 10;
				}
				else
					cout << "Door is locked" << endl;//won't let you go south until you have both items

			}
			else if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 8;
			if (input.compare("key") == 0) {


				item[3] = "key";
				cout << "You grabbed the key!" << endl;
			}


			break;
		case 10:
			PlaySound(TEXT("omnom.wav"), NULL, SND_FILENAME);
			PlaySound(TEXT("omnom2.wav"), NULL, SND_FILENAME);
			PlaySound(TEXT("omnom3.wav"), NULL, SND_FILENAME);
			cout << "You have won now you can go back into reality child!" << endl;
			cin >> input;
			if (input.compare("omnom"))
				cout << "Now that you have won I should tell you i'm you from the future don't look back move forward in life" << endl;

			input = "quit";//allow the game to stop

			break;
		case 11:

			cout << "That was close you almost stepped into the pool" << endl;
			cout << "you can go North or West" << endl;
			monster(health);
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 2;
			else if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 9;
			break;

		}//end switch
	}//end while
	cout << "Game over" << endl;
	exit(0);
}//end main

void monster(int health) {
	int number = rand() % 100 + 1;
	if (number<50) {
		cout << "A wild horsemen appers, you lose 5 health to its dangerous high pitched voice" << endl;
		health -= 5;
		cout << "your health is now" << health << endl;
	}
	if (number>50 && number < 100) {
		cout << "rabid bunnies" << endl;
		health -= 10;
		cout << "your health is now" << health << endl;
	}
}




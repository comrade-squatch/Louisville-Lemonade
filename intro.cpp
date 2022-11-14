#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {

	//String headers for title art

	string header1 = R"(   _     _____ _   _ _____ _____  _   _ _____ _      _      _____                  )";
	string header2 = R"(  | |   |  _  | | | |_   _/  ___|| | | |_   _| |    | |    |  ___|                 )";
	string header3 = R"(  | |   | | | | | | | | | \ `--. | | | | | | | |    | |    | |__                   )";
	string header4 = R"(  | |   | | | | | | | | |  `--. \| | | | | | | |    | |    |  __|                  )";
	string header5 = R"(  | |___\ \_/ / |_| |_| |_/\__/ /\ \_/ /_| |_| |____| |____| |___                  )";
	string header6 = R"(  \_____/\___/ \___/ \___/\____/  \___/ \___/\_____/\_____/\____/                  )";
	string header7 = R"(             ______                                                                )";
	string header8 = R"(         .-'.-'  |`-.         _      ________  ________ _   _   ___ ______ _____  )";
	string header9 = R"(      .-' .' \   | / `.      | |    |  ___|  \/  |  _  | \ | | / _ \|  _  \  ___| )";
	string header10 = R"(    .'   /`.  \  |/  .'\     | |    | |__ | .  . | | | |  \| |/ /_\ \ | | | |__   )";
	string header11 = R"(   .    ;   ` .\ |. '   ;    | |    |  __|| |\/| | | | | . ` ||  _  | | | |  __|  )";
	string header12 = R"(  (     |-------(o)-----|    | |____| |___| |  | \ \_/ / |\  || | | | |/ /| |___  )";
	string header13 = R"(  `.    ;   . '/ |\ .   ;    \_____/\____/\_|  |_/\___/\_| \_/\_| |_/___/ \____/  )";
	string header14 = R"(    .    \.'  /  | \ ` /                                                          )";
	string header15 = R"(     `-.  `. /   |  \ .      *****************************************************)";
	string header16 = R"(        `-._`-.__|_.-'       *****************************************************)";
	string header17 = R"(            """""                                                                 )";

	//Below is the title art. I had trouble with literal strings, so this is long/messy, but it works...

	cout << header1 << "\n" << header2 << "\n" << header3 << "\n" << header4 << "\n" << header5 << "\n" << header6
		<< "\n" << header7 << "\n" << header8 << "\n" << header9 << "\n" << header10 << "\n" << header11 << "\n" << header12
		<< "\n" << header13 << "\n" << header14 << "\n" << header15 << "\n" << header16 << "\n" << header17 << "\n";

	cout << "Press any key to begin...";
	cin.ignore();

	//Below are the rules to the game, feel free to modify text based on later additions or features

	string rules1 = "Welcome to Louisville Lemonade. This game is a take on the classic Lemonade Stand game you might have seen before.";
	string rules2 = "Your task is to run a basic lemonade stand on campus, purchase supplies, and sell lemonade to thirsty students.";
	string rules3 = "Your objective is to make as much money as possible within the alotted time.";

	cout << rules1 << "\n";
	cout << "Press any key to continue...";
	cin.ignore();
	cout << rules2 << "\n";
	cout << "Press any key to continue...";
	cin.ignore();
	cout << rules3 << "\n";
	cout << "Press any key to continue...";
	cin.ignore();

	//Below is a prompt to begin the game or exit

	int response;

	cout << "Would you like to try your luck at becoming a lemonade mogul? Enter 1 to continue, 0 to quit: ";
	cin >> response;
	bool startgame(int x);
	if (response == 0) {
		cout << "Maybe next time...";
		exit;
	}
	else {
		cout << "Great! Let's get started!\n";
	}

	//Below is the prompt for the user to enter their name. If possible, this will be used for a high score feature

	string user_name;
	cout << "First things first, what is your name? ";
	cin >> user_name;
	cout << "Hello, " << user_name << "! Good luck on building your lemonade empire!";




		return 0;
}
//============================================================================
// Name        : qwerty4.cpp
// Author      : hoshi_u3
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "Register.h"
#include "Login.h"

using namespace std;

int main() {

	while(true) {
		int option;

		cout << "1. Register" << endl;
		cout << "2. Login" << endl;
		cout << "3. Quit: " << flush;
		cin >> option;

		if(option == 1) {

			Register regis;
			if(regis.reg()) {;
				regis.createFile();
			}
		}

		else if(option == 2) {
			Login login;
			string userinput;
			string pwinput;

			cout << "Enter username: " << flush; cin >> userinput;
			if(login.existanceOfUsername(userinput)) {
				string realPassword = login.getPassword(userinput);
				for(int i=0; i<4; i++) {
					cout << "Enter password: " << flush; cin >> pwinput;
					if(login.passwordChecker(realPassword, pwinput)) {
						cout << "Login success!" << endl;
						break;
					}
					else {
						cout << "Attempted too much! Please try again later!" << endl;
					}
				}
			} else {
				cout << "User doesn't exist!" << endl;
			}

		}

		else {
			break;
		}

	}
	return 0;
}

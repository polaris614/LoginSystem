/*
 * Register.cpp
 *
 *  Created on: 22 Feb 2021
 *      Author: LeeZhengJun
 */

#include "Register.h"

bool Register::reg() {
		cout << "Username: " << flush; cin >> username;
		cout << "Password: " << flush; cin >> password;
		return 1;
}

void Register::createFile() {
	fstream outputFile;
	outputFile.open(username, ios::out);

	if (outputFile.is_open()) {
		outputFile << username << endl;
		outputFile << password << endl;
		outputFile.close();
		cout << "Account successfully created!" << endl;
	} else {
		cout << "Could not register account!" << endl;
	}

}



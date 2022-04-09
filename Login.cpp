/*
 * Login.cpp
 *
 *  Created on: 22 Feb 2021
 *      Author: LeeZhengJun
 */

#include "Login.h"

Login::Login() {
}

bool Login::existanceOfUsername(string username) {
	ifstream inputFile;
	inputFile.open(username);

	if(inputFile.is_open()) {
		return 1;
	}
	else {
		return 0;
	}

}

string Login::getPassword(string username) {
	ifstream passwordInfo;

	passwordInfo.open(username);

	string password;

	if(passwordInfo.is_open()) {
		for(int i = 0; i < 2; i++) {
			getline(passwordInfo, password, '\n');
		}
		passwordInfo.close();

	}

	return password;
}

bool Login::passwordChecker(string realPassword, string passwordEntered) {
	return passwordEntered == realPassword;
}

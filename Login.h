/*
 * Login.h
 *
 *  Created on: 22 Feb 2021
 *      Author: LeeZhengJun
 */

#ifndef LOGIN_H_
#define LOGIN_H_

#include <iostream>
#include <fstream>

using namespace std;

class Login {
public:
	Login();

	bool existanceOfUsername(string username);
	string getPassword(string username);
	bool passwordChecker(string realPassword, string passwordEntered);


};

#endif /* LOGIN_H_ */

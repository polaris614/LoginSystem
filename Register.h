/*
 * Register.h
 *
 *  Created on: 22 Feb 2021
 *      Author: LeeZhengJun
 */

#ifndef REGISTER_H_
#define REGISTER_H_

#include <iostream>
#include <fstream>
using namespace std;


class Register {
private:
	string username;
	string password;

public:
	bool reg();
	void createFile();
	bool checkFileExistance(string username);

};


#endif /* REGISTER_H_ */

#include <iostream>
#include <string>
#include "Header.h"
using namespace std;


	//Методи для перевірки логіну та паролю
void SignIN::SetLog (string lo){ EnteredLog = lo; };

void SignIN::SetLog(string lo, int i) { CorrectLog = lo; };

void SignIN::SetPassword(string pa){ EnteredPassword = pa; }

void SignIN::SetPassword(string pa, int j) { CorrectPassword = pa; }

bool SignIN::Check() {
	if (CorrectLog == EnteredLog && CorrectPassword == EnteredPassword) {
		Status.Signed=true;
	 return true;
		}
		else { return false;
		}
		
	}
void SignIN::isSigned(bool ck) { if (ck) { cout << "Signed success\n"; } else cout << "Signed error\n"; }


void SignIN::Get() { cout << "Login: " << CorrectLog << " Password: " << CorrectPassword << endl; };

//Клас 


	void SignUP::SetLog(string l) { CorrectLog = l; cout << "Login was chenged;\n"; }
	void SignUP::SetPassword(string p) { CorrectPassword = p; cout << "Password was chenged;\n";}
	void SignUP::Get() { cout << "Login: " << CorrectLog << " Password: " << CorrectPassword << endl; };


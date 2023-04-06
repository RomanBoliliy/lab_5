#include <iostream>
#include <string>
#include"Header.h"
//#include "Source.cpp";
using namespace std;
//Цикл для можливості або входження в систему, або зміни логіна і пароля

namespace Fun {
	int cycle(int choise) {
		SignIN test;

		do
		{
			static string l;
			static string p;
			cout << "Enter Login: \n";
			getline(cin, l);
			cout << "Enter Password: \n";
			getline(cin, p);

			if (choise == 1) {

				test.SetLog(l);
				test.SetPassword(p);
				test.isSigned(test.Check());

			}
			else if (choise == 0) {


				cout << "Before:\n";
				test.Get();
				test.SetLog(l, 1);
				test.SetPassword(p, 1);

				cout << "After:\n";
				test.Get();
			}
			cout << "You want sign up (0) or sign in (1) or exit (2)?\n";
			cin >> choise;
			cin.ignore(32767, '\n');
		} while (choise < 2);
		return 0;
	}
}
#include <iostream>
#include "Header.h"
#include "Source1.cpp"
using namespace std;


//Система авторизації

int main()
{
	short int choise;
	cout << "You want sign up (0) or sign in (1) or exit (2)?\n";
	cin >> choise;
	cin.ignore(32767, '\n');
	cycle(choise);
	
}
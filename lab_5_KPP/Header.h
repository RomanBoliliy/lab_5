#pragma once
#ifndef MY_SYMBOL_H
#define MY_SYMBOL_H
#include <string>;

using namespace std;

union SignStatus
{
	 bool Signed;
	 bool UnSigned;
};


class SignIN {
	

private: 
	SignStatus Status;
	protected:

		 string EnteredLog;
		 string EnteredPassword;
		 

		 string CorrectLog;
		 string CorrectPassword;

	public:

		virtual void SetLog(string lo); //lo

		virtual void SetLog(string lo, int i);

		virtual void SetPassword(string pa);//pa

		virtual void SetPassword(string pa, int j);

		 bool Check();
		 void isSigned(bool); //ck

		 void Get();

};

class SignUP : public SignIN 
{
public:
	 void SetLog(string); //l
	 void SetPassword(string);//p
	 void Get();
};


inline int cycle(int);


#endif //MY_SYMBOL_H
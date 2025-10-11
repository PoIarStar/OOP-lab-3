#pragma once

#include "Money.h"

using std::string;

class Account
{
protected:
	static int count;

	int id;
	string name;
	double percent;
	Money balance;
public:
	Account();
	Account(string owner_name, double percent, Money balance);
	Account(string owner_name, double percent, double balance);

	void change_owner(string new_owner_name);
	void withdraw();
	void deposit();
	void interest_calc();

	double balance_rub();
	double balance_usd();
	double balance_eur();

};


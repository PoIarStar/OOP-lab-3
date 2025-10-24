#pragma once

#include "Money.h"

using std::string;

class Account
{
protected:
	static int* count;

	int* id;
	string* name;
	double* percent;
	Money* balance;
public:
	Account();
	Account(string owner_name, double percent_, Money balance_);
	Account(string owner_name, double percent_, double balance_);

	void change_owner(string new_owner_name);

	bool can_withdraw(Money money_);
	bool can_withdraw(float money_);

	void withdraw(Money money_);
	void withdraw(float money_);
	void deposit(Money money_);
	void deposit(float money_);
	void interest_calc();

	double balance_rub();
	double balance_usd();
	double balance_eur();

};


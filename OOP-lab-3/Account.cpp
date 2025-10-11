#include "Account.h"

int Account::count = 0;

Account::Account()
{
}

Account::Account(string owner_name, double percent, Money balance)
{
}

Account::Account(string owner_name, double percent, double balance)
{
}

void Account::change_owner(string new_owner_name)
{
}

void Account::withdraw()
{
}

void Account::deposit()
{
}

void Account::interest_calc()
{
}

double Account::balance_rub()
{
	return 0.0;
}

double Account::balance_usd()
{
	return 0.0;
}

double Account::balance_eur()
{
	return 0.0;
}

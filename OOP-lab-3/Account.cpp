#include "Account.h"

const float RUB_TO_USD = 80.97;
const float RUB_TO_EUR = 94.08;

int* Account::count = new int(0);

Account::Account()
{
	id = new int((*count)++);

	name = new string();
	percent = new double(0);
	balance = new Money();
}

Account::Account(string owner_name, double percent_, Money balance_)
{
	id = new int((*count)++);

	name = new string(owner_name);
	percent = new double(percent_);
	balance = new Money(balance_);
}

Account::Account(string owner_name, double percent_, double balance_)
{
	id = new int((*count)++);

	name = new string(owner_name);
	percent = new double(percent_);
	balance = new Money(balance_);
}

void Account::change_owner(string new_owner_name)
{
	*name = new_owner_name;
}

bool Account::can_withdraw(Money money_)
{
	return *balance >= money_;
}

bool Account::can_withdraw(float money_)
{
	return GREATER(balance->to_double(), money_);
}

void Account::withdraw(Money money)
{
	if (can_withdraw(money)) {
		*balance = *balance - money;
	}
}

void Account::withdraw(float money)
{
	Money to_withd = Money(money);
	if (can_withdraw(to_withd)) {
		*balance = *balance - money;
	}
}

void Account::deposit(Money money_)
{
	*balance = *balance + money_;
}

void Account::deposit(float money_)
{
	*balance = *balance + Money(money_);
}

void Account::interest_calc()
{
	*balance = *balance * (1 + *percent);
}

double Account::balance_rub()
{
	return balance->to_double();
}

double Account::balance_usd()
{
	return balance->to_double() / RUB_TO_USD;
}

double Account::balance_eur()
{
	return balance->to_double() / RUB_TO_EUR;
}

#include "Money.h"

Money::Money()
{
}

Money::Money(double summ)
{
}

Money::Money(int kop1_, int kop5_, int kop10_, int kop50_, int rub1_, int rub2_, int rub5_, int rub10_, int rub50_, int rub100_, int rub500_, int rub1000_, int rub5000_)
{
}

Money& Money::operator=(Money& other)
{
	// TODO: вставьте здесь оператор return
}

Money::~Money()
{
}

double Money::to_double()
{
	return 0.0;
}

string Money::toString()
{
	return string();
}

int Money::get_kop1()
{
	return 0;
}

int Money::get_kop5()
{
	return 0;
}

int Money::get_kop10()
{
	return 0;
}

int Money::get_kop50()
{
	return 0;
}

int Money::get_rub1()
{
	return 0;
}

int Money::get_rub2()
{
	return 0;
}

int Money::get_rub5()
{
	return 0;
}

int Money::get_rub10()
{
	return 0;
}

int Money::get_rub50()
{
	return 0;
}

int Money::get_rub100()
{
	return 0;
}

int Money::get_rub500()
{
	return 0;
}

int Money::get_rub1000()
{
	return 0;
}

int Money::get_rub5000()
{
	return 0;
}

void Money::set_kop1(int value)
{
}

void Money::set_kop5(int value)
{
}

void Money::set_kop10(int value)
{
}

void Money::set_kop50(int value)
{
}

void Money::set_rub1(int value)
{
}

void Money::set_rub2(int value)
{
}

void Money::set_rub5(int value)
{
}

void Money::set_rub10(int value)
{
}

void Money::set_rub50(int value)
{
}

void Money::set_rub100(int value)
{
}

void Money::set_rub500(int value)
{
}

void Money::set_rub1000(int value)
{
}

void Money::set_rub5000(int value)
{
}

Money Money::operator+(Money other) const
{
	return Money();
}

Money Money::operator-(Money other) const
{
	return Money();
}

Money& Money::operator+=(Money other)
{
	// TODO: вставьте здесь оператор return
}

Money& Money::operator-=(Money other)
{
	// TODO: вставьте здесь оператор return
}

bool Money::operator==(Money other) const
{
	return false;
}

bool Money::operator!=(Money other) const
{
	return false;
}

bool Money::operator>(Money other) const
{
	return false;
}

bool Money::operator<(Money other) const
{
	return false;
}

bool Money::operator>=(Money other) const
{
	return false;
}

bool Money::operator<=(Money other) const
{
	return false;
}

ostream& operator<<(ostream& os, const Money& money)
{
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& is, Money& money)
{
	// TODO: вставьте здесь оператор return
}

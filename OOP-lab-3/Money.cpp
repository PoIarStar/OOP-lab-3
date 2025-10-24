#include "Money.h"

using std::to_string;

Money::Money()
{
	kop1 = new int(0);
	kop5 = new int(0);
	kop10 = new int(0);
	kop50 = new int(0);
	rub1 = new int(0);
	rub2 = new int(0);
	rub5 = new int(0);
	rub10 = new int(0);
	rub50 = new int(0);
	rub100 = new int(0);
	rub500 = new int(0);
	rub1000 = new int(0);
	rub5000 = new int(0);
}

Money::Money(double summ)
{
	kop1 = new int(0);
	kop5 = new int(0);
	kop10 = new int(0);
	kop50 = new int(0);
	rub1 = new int(0);
	rub2 = new int(0);
	rub5 = new int(0);
	rub10 = new int(0);
	rub50 = new int(0);
	rub100 = new int(0);
	rub500 = new int(0);
	rub1000 = new int(0);
	rub5000 = new int(0);
	from_double(summ);
}

Money::Money(int kop1_, int kop5_, int kop10_, int kop50_, int rub1_, int rub2_, int rub5_, int rub10_, int rub50_, int rub100_, int rub500_, int rub1000_, int rub5000_)
{
	kop1 = new int(kop1_);
	kop5 = new int(kop5_);
	kop10 = new int(kop10_);
	kop50 = new int(kop50_);
	rub1 = new int(rub1_);
	rub2 = new int(rub2_);
	rub5 = new int(rub5_);
	rub10 = new int(rub10_);
	rub50 = new int(rub50_);
	rub100 = new int(rub100_);
	rub500 = new int(rub500_);
	rub1000 = new int(rub1000_);
	rub5000 = new int(rub5000_);
}

Money& Money::operator=(Money& other)
{
	*kop1 = *other.kop1;
	*kop5 = *other.kop5;
	*kop10 = *other.kop10;
	*kop50 = *other.kop50;
	*rub1 = *other.rub1;
	*rub2 = *other.rub2;
	*rub5 = *other.rub5;
	*rub10 = *other.rub10;
	*rub50 = *other.rub50;
	*rub100 = *other.rub100;
	*rub500 = *other.rub500;
	*rub1000 = *other.rub1000;
	*rub5000 = *other.rub5000;
	return *this;
}

Money& Money::operator=(Money other)
{
	*kop1 = *other.kop1;
	*kop5 = *other.kop5;
	*kop10 = *other.kop10;
	*kop50 = *other.kop50;
	*rub1 = *other.rub1;
	*rub2 = *other.rub2;
	*rub5 = *other.rub5;
	*rub10 = *other.rub10;
	*rub50 = *other.rub50;
	*rub100 = *other.rub100;
	*rub500 = *other.rub500;
	*rub1000 = *other.rub1000;
	*rub5000 = *other.rub5000;
	return *this;
}

Money::~Money()
{
	delete kop1, kop5, kop10, kop50, rub1, rub2, rub5, rub10, rub50, rub100, rub500, rub1000, rub5000;
}

double Money::to_double() const
{
	return *kop1 * 0.01 + *kop5 * 0.05 + *kop10 * 0.1 + *kop50 *0.5 + *rub1 + *rub2 * 2 + *rub5 * 5 + *rub10 * 10 + *rub50 * 50 + *rub100 * 100 +
		*rub500 * 500 + *rub1000 * 1000 + *rub5000 * 5000;
}

void Money::from_double(double value)
{

	*rub5000 = value / 5000;
	value -= *rub5000 * 5000;

	*rub1000 = value / 1000;
	value -= *rub1000 * 1000;

	*rub500 = value / 500;
	value -= *rub500 * 500;

	*rub100 = value / 100;
	value -= *rub100 * 100;

	*rub50 = value / 50;
	value -= *rub50 * 50;

	*rub10 = value / 10;
	value -= *rub10 * 10;

	*rub5 = value / 5;
	value -= *rub5 * 5;

	*rub2 = value / 2;
	value -= *rub5 * 2;

	*rub1 = value / 1;
	value -= *rub10;

	if (GREATER(value, 0.5)) {
		*kop50 = 1;
		value -= 0.5;
	}

	while (GREATER(value, 0.1)) {
		kop10++;
		value -= 0.1;
	}

	if (GREATER(value, 0.05)) {
		*kop5 = 1;
		value -= 0.05;
	}

	while (GREATER(value, 0.01)) {
		kop1++;
		value -= 0.01;
	}
}

string Money::toString() const
{
	return to_string(to_double());
}

int Money::get_kop1()
{
	return *kop1;
}

int Money::get_kop5()
{
	return *kop5;
}

int Money::get_kop10()
{
	return *kop10;
}

int Money::get_kop50()
{
	return *kop50;
}

int Money::get_rub1()
{
	return *rub1;
}

int Money::get_rub2()
{
	return *rub2;
}

int Money::get_rub5()
{
	return *rub5;
}

int Money::get_rub10()
{
	return *rub10;
}

int Money::get_rub50()
{
	return *rub50;
}

int Money::get_rub100()
{
	return *rub100;
}

int Money::get_rub500()
{
	return *rub500;
}

int Money::get_rub1000()
{
	return *rub1000;
}

int Money::get_rub5000()
{
	return *rub5000;
}

void Money::set_kop1(int value)
{
    *kop1  = value;
}

void Money::set_kop5(int value)
{
    *kop5  = value;
}

void Money::set_kop10(int value)
{
    *kop10  = value;
}

void Money::set_kop50(int value)
{
    *kop50  = value;
}

void Money::set_rub1(int value)
{
    *rub1  = value;
}

void Money::set_rub2(int value)
{
    *rub2  = value;
}

void Money::set_rub5(int value)
{
    *rub5  = value;
}

void Money::set_rub10(int value)
{
    *rub10  = value;
}

void Money::set_rub50(int value)
{
    *rub50  = value;
}

void Money::set_rub100(int value)
{
    *rub100  = value;
}

void Money::set_rub500(int value)
{
    *rub500  = value;
}

void Money::set_rub1000(int value)
{
    *rub1000  = value;
}

void Money::set_rub5000(int value)
{
    *rub5000  = value;
}

Money Money::operator+(Money other) const
{
	return Money(to_double() + other.to_double());
}

Money Money::operator-(Money other) const
{
	double th = to_double(), oth = other.to_double();
	if (GREATER(th, oth))
		return Money(th - oth);
	throw std::underflow_error("Невозможно вычесть большую денежную сумму из меньшей");
}

Money Money::operator*(double other) const
{
	if (GREATER(other, 0))
		return Money(to_double() * other);
	throw std::underflow_error("Не может существовать отрицательная денежная сумма");
}

Money Money::operator/(double other) const
{
	if (GREATER(other, 0))
		return Money(to_double() / other);
	throw std::underflow_error("Не может существовать отрицательная денежная сумма");
}

bool Money::operator==(Money other) const
{
	return EQUAL(to_double(), other.to_double());
}

bool Money::operator!=(Money other) const
{
	return !(*this == other);
}

bool Money::operator>(Money other) const
{
	return GREATER(to_double(), other.to_double());
}

bool Money::operator<(Money other) const
{
	return GREATER(other.to_double(), to_double());
}

bool Money::operator>=(Money other) const
{
	return !(*this < other);
}

bool Money::operator<=(Money other) const
{
	return !(*this > other);
}

ostream& operator<<(ostream& os, const Money& money)
{
	os << money.toString();
	return os;
}

istream& operator>>(istream& is, Money& money)
{
	double val;
	is >> val;
	if (is)
		money.from_double(val);
	return is;
}

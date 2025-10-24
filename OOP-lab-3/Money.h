#pragma once

#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;


#define EPS 10e-6
#define GREATER(x, y)(y - x < EPS)
#define EQUAL(x, y)(y - x < EPS && x - y < EPS)

class Money
{
protected:
	int *kop1, *kop5, *kop10, *kop50, *rub1, *rub2, *rub5, *rub10, *rub50, *rub100, *rub500, *rub1000, *rub5000;
public:
	Money();
	Money(double summ);
	Money(int kop1_, int kop5_, int kop10_, int kop50_, int rub1_, int rub2_, int rub5_, int rub10_, int rub50_, int rub100_, int rub500_, int rub1000_, int rub5000_);
	Money& operator=(Money& other);
	Money& operator=(Money other);
	~Money();

	double to_double() const;
	void from_double(double value);
	string toString() const;

	int get_kop1();
	int get_kop5();
	int get_kop10();
	int get_kop50();
	int get_rub1();
	int get_rub2();
	int get_rub5();
	int get_rub10();
	int get_rub50();
	int get_rub100();
	int get_rub500();
	int get_rub1000();
	int get_rub5000();

	void set_kop1(int value);
	void set_kop5(int value);
	void set_kop10(int value);
	void set_kop50(int value);
	void set_rub1(int value);
	void set_rub2(int value);
	void set_rub5(int value);
	void set_rub10(int value);
	void set_rub50(int value);
	void set_rub100(int value);
	void set_rub500(int value);
	void set_rub1000(int value);
	void set_rub5000(int value);

	Money operator+(Money other) const;
	Money operator-(Money other) const;
	Money operator*(double other) const;
	Money operator/(double other) const;

	bool operator==(Money other) const;
	bool operator!=(Money other) const;
	bool operator>(Money other) const;
	bool operator<(Money other) const;
	bool operator>=(Money other) const;
	bool operator<=(Money other) const;

	friend ostream& operator<<(ostream& os, const Money& money);
	friend istream& operator>>(istream& is, Money& money);

};

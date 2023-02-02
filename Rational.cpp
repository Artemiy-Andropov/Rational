#include <iostream>
#include "Rational.h"
#include "Exception.h"
#include <numeric>

Rational::Rational()
{
	m_num = 0;
	m_den = 1;
}

Rational::Rational(int num, int den)
{
	m_num = num;
	if (den != 0)
		m_den = den;
	else
		throw ArrayException("Error in constructor with parameters. Invalid input. The denominator is 0.", 1);
}

Rational::Rational(const Rational& obj)
{
	m_num = obj.m_num;
	m_den = obj.m_den;
}

Rational Rational::operator+(const Rational& obj)
{
	int mult_1 = m_den;
	int mult_2 = obj.m_den;

	int copy_num = obj.m_num;

	m_num = (m_num * mult_2) + (copy_num * mult_1);
	m_den = (m_den * mult_2);

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational Rational::operator-(const Rational& obj)
{
	int mult_1 = m_den;
	int mult_2 = obj.m_den;

	int copy_num = obj.m_num;

	m_num = (m_num * mult_2) - (copy_num * mult_1);
	m_den = (m_den * mult_2);

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational Rational::operator*(const Rational& obj)
{
	m_num *= obj.m_num;
	m_den *= obj.m_den;

	int div = std::gcd(m_num, m_den);

	if (div == 1 || div == 0)
		return *this;
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}

Rational Rational::operator/(const Rational& obj)
{
	m_num *= obj.m_den;
	m_den *= obj.m_num;

	int div = std::gcd(m_num, m_den);

	if (div == 1)
		return *this;
	else if (div == 0)
	{
		if (m_den == 0)
			throw ArrayException("Error in division function on class object 'Rational'. Invalid input. The denominator is 0.", 1);
		else
			return *this;
	}
	else
	{
		m_num /= div;
		m_den /= div;
		return *this;
	}
}
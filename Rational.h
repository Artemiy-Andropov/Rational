#pragma once
#include <iostream>

class Rational
{
	int m_num;
	int m_den;

public:

	/*
	*@brief Конструктор
	*/
	Rational();

	/*
	*@brief Конструктор с параметрами
	*@param Числитель(int)
	*@param Знаминатель(int)
	*/
	Rational(int num, int den);

	/*
	*@brief Конструктор копирования
	*@param Константная ссылка на объект класса "Rational"
	*/
	Rational(const Rational &obj);

	/*
	*@brief Оператор + с объектом класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	Rational operator+(const Rational& obj);

	/*
	*@brief Оператор - с объектом класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	Rational operator-(const Rational& obj);

	/*
	*@brief Оператор * с объектом класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	Rational operator*(const Rational& obj);

	/*
	*@brief Оператор / с объектом класса "Rational"
	*@param Константная ссылка на объект класса "Rational"
	*@return Объект класса "Rational"
	*/
	Rational operator/(const Rational& obj);
};
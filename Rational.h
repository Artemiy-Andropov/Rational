#pragma once
#include <iostream>

class Rational
{
	int m_num;
	int m_den;

public:

	/*
	*@brief �����������
	*/
	Rational();

	/*
	*@brief ����������� � �����������
	*@param ���������(int)
	*@param �����������(int)
	*/
	Rational(int num, int den);

	/*
	*@brief ����������� �����������
	*@param ����������� ������ �� ������ ������ "Rational"
	*/
	Rational(const Rational &obj);

	/*
	*@brief �������� + � �������� ������ "Rational"
	*@param ����������� ������ �� ������ ������ "Rational"
	*@return ������ ������ "Rational"
	*/
	Rational operator+(const Rational& obj);

	/*
	*@brief �������� - � �������� ������ "Rational"
	*@param ����������� ������ �� ������ ������ "Rational"
	*@return ������ ������ "Rational"
	*/
	Rational operator-(const Rational& obj);

	/*
	*@brief �������� * � �������� ������ "Rational"
	*@param ����������� ������ �� ������ ������ "Rational"
	*@return ������ ������ "Rational"
	*/
	Rational operator*(const Rational& obj);

	/*
	*@brief �������� / � �������� ������ "Rational"
	*@param ����������� ������ �� ������ ������ "Rational"
	*@return ������ ������ "Rational"
	*/
	Rational operator/(const Rational& obj);
};
#include <iostream>
#include "Rational.h"
#include "Exception.h"

int main()
{
	try
	{

	}
	catch (ArrayException& exception_)
	{
		std::cerr << "An exception occurred at array (" << exception_.GetError() << ") " << "Error code: " << exception_.GetCodeError() << std::endl;
	}
}
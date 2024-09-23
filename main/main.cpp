#include <iostream>
#include <windows.h>

#include "MathOperator.h"
#include "MathFuncsDll.h"

using namespace std;

int main()
{
	///test dll
	double a = 7.4;
	int b = 99;

	cout << "a + b = " <<
		MathFuncs::MyMathFuncs::Add(a, b) << endl;
	cout << "a - b = " <<
		MathFuncs::MyMathFuncs::Subtract(a, b) << endl;
	cout << "a * b = " <<
		MathFuncs::MyMathFuncs::Multiply(a, b) << endl;
	cout << "a / b = " <<
		MathFuncs::MyMathFuncs::Divide(a, b) << endl;

	try
	{
		cout << "a / 0 = " <<
			MathFuncs::MyMathFuncs::Divide(a, 0) << endl;
	}
	catch (const invalid_argument &e)
	{
		cout << "Caught exception: " << e.what() << endl;
	}

	/// test lib 
	MathOperator mo;
	std::cout << "The average of 2, 4, 6 is: " << mo.getAverage(2, 4, 6) << std::endl;

	///test exe
	WinExec("\"MathSquare.exe\"", 1);

	system("pause");
	return 0;
}

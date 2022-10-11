#include "calculator.h"
//by Neteli some text
int Calculator::Add (double a, double b)
{

	return a + b + 0.5;

}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

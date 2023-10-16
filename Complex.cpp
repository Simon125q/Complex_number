#include <iostream>
#include "Complex.h"

using namespace std;

ComplexNumber::ComplexNumber(double rl, double img)
{
    real = rl;
    imaginary = img;
}

ComplexNumber ComplexNumber::operator+(ComplexNumber &other) const
{
    ComplexNumber result(real + other.real, imaginary + other.imaginary);

    return result;
}

ComplexNumber ComplexNumber::operator-(ComplexNumber &other) const
{
    ComplexNumber result(real - other.real, imaginary - other.imaginary);

    return result;
}

ComplexNumber ComplexNumber::operator*(ComplexNumber &other) const
{
    ComplexNumber result(real * other.real, imaginary * other.imaginary);

    return result;
}

ComplexNumber ComplexNumber::operator/(ComplexNumber &other) const
{
    ComplexNumber result(double(real) / other.real, double(imaginary) / other.imaginary);

    return result;
}

void ComplexNumber::operator+=(const ComplexNumber &other)
{
    real += other.real;
    imaginary += other.imaginary;
}

void ComplexNumber::operator-=(const ComplexNumber &other)
{
    real -= other.real;
    imaginary -= other.imaginary;
}

void ComplexNumber::operator*=(const ComplexNumber &other)
{
    real *= other.real;
    imaginary *= other.imaginary;
}

void ComplexNumber::operator/=(const ComplexNumber &other)
{
    real /= other.real;
    imaginary /= other.imaginary;
}

void ComplexNumber::operator=(const ComplexNumber &other)
{
    real = other.real;
    imaginary = other.imaginary;
}

bool ComplexNumber::operator==(ComplexNumber &other) const
{
    if (real == other.real && imaginary == other.imaginary)
        return true;
    else
        return false;
}

bool ComplexNumber::operator!=(ComplexNumber &other) const
{
    if (real != other.real || imaginary != other.imaginary)
        return true;
    else
        return false;
}

double ComplexNumber::amplitude()
{
    return real;
}

double ComplexNumber::phase()
{
    return imaginary;
}

ostream &operator<<(ostream &os, const ComplexNumber &other)
{
    os << other.real << " + i" << other.imaginary;
    return os;
}

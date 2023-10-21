#include <iostream>
#include "Complex.h"

using namespace std;

ComplexNumber::ComplexNumber(double rl, double img)
{
    real = rl;
    imaginary = img;
}

ComplexNumber::ComplexNumber(double rl)
{
    real = rl;
    imaginary = 0;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &other) const
{
    ComplexNumber result(real + other.real, imaginary + other.imaginary);

    return result;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &other) const
{
    ComplexNumber result(real - other.real, imaginary - other.imaginary);

    return result;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &other) const
{
    ComplexNumber result(real * other.real, imaginary * other.imaginary);

    return result;
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber &other) const
{
    ComplexNumber result(double(real) / other.real, double(imaginary) / other.imaginary);

    return result;
}

ComplexNumber& ComplexNumber::operator+=(const ComplexNumber &other)
{
    real += other.real;
    imaginary += other.imaginary;
    return *this;
}

ComplexNumber& ComplexNumber::operator-=(const ComplexNumber &other)
{
    real -= other.real;
    imaginary -= other.imaginary;
    return *this;
}

ComplexNumber& ComplexNumber::operator*=(const ComplexNumber &other)
{
    real *= other.real;
    imaginary *= other.imaginary;
    return *this;
}

ComplexNumber& ComplexNumber::operator/=(const ComplexNumber &other)
{
    real /= other.real;
    imaginary /= other.imaginary;
    return *this;
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber &other)
{
    real = other.real;
    imaginary = other.imaginary;
    return *this;
}

bool ComplexNumber::operator==(const ComplexNumber &other) const
{
    if (real == other.real && imaginary == other.imaginary)
        return true;
    else
        return false;
}

bool ComplexNumber::operator!=(const ComplexNumber &other) const
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

ComplexNumber operator+(double num, const ComplexNumber& obj) {
    return ComplexNumber(num + obj.real, obj.imaginary);
}

ComplexNumber operator-(double num, const ComplexNumber& obj) {
    return ComplexNumber(num - obj.real, obj.imaginary);
}

ComplexNumber operator*(double num, const ComplexNumber& obj) {
    return ComplexNumber(num * obj.real, obj.imaginary);
}

ComplexNumber operator/(double num, const ComplexNumber& obj) {
    return ComplexNumber(num / obj.real, obj.imaginary);
}

bool operator==(double num, const ComplexNumber &obj)
{
    if (num == obj.real && obj.imaginary == 0)
        return true;
    else
        return false;
}

bool operator!=(double num, const ComplexNumber &obj)
{
    if (num != obj.real || obj.imaginary != 0)
        return true;
    else
        return false;
}


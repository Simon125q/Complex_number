#include <iostream>
#include <math.h>
#include "Complex.h"

using namespace std;

#define ERROR 1

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
    double new_real = (real * other.real - imaginary * other.imaginary);
    double new_img = (real * other.imaginary + imaginary * other.real);

    ComplexNumber result(new_real, new_img);

    return result;
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber &other) const
{

    if (other.real == 0 && other.imaginary == 0)
    {
        cout << "You can't divide by 0" << endl;
        exit(ERROR);
    }
    double new_real = (real * other.real + imaginary * other.imaginary) / (pow(other.real, 2) + pow(other.imaginary, 2));
    double new_img = (imaginary * other.real + real * other.imaginary) / pow(other.real, 2) + pow(other.imaginary, 2);

    ComplexNumber result(new_real, new_img);

    return result;
}

ComplexNumber &ComplexNumber::operator+=(const ComplexNumber &other)
{
    real += other.real;
    imaginary += other.imaginary;
    return *this;
}

ComplexNumber &ComplexNumber::operator-=(const ComplexNumber &other)
{
    real -= other.real;
    imaginary -= other.imaginary;
    return *this;
}

ComplexNumber &ComplexNumber::operator*=(const ComplexNumber &other)
{
    real *= other.real;
    imaginary *= other.imaginary;
    return *this;
}

ComplexNumber &ComplexNumber::operator/=(const ComplexNumber &other)
{
    real /= other.real;
    imaginary /= other.imaginary;
    return *this;
}

ComplexNumber &ComplexNumber::operator=(const ComplexNumber &other)
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
    return sqrt(pow(real, 2) + pow(imaginary, 2));
}

double ComplexNumber::phase()
{
    return atan(imaginary / real);
}

ostream &operator<<(ostream &os, const ComplexNumber &other)
{
    if (other.imaginary >= 0)
    {
        os << other.real << " + i" << other.imaginary;
    }
    else
    {
        os << other.real << " - i" << abs(other.imaginary);
    }
    return os;
}

ComplexNumber operator+(double num, const ComplexNumber &obj)
{
    return ComplexNumber(num + obj.real, obj.imaginary);
}

ComplexNumber operator-(double num, const ComplexNumber &obj)
{
    return ComplexNumber(num - obj.real, obj.imaginary);
}

ComplexNumber operator*(double num, const ComplexNumber &obj)
{
    return ComplexNumber(num * obj.real, obj.imaginary);
}

ComplexNumber operator/(double num, const ComplexNumber &obj)
{
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

#pragma once

class ComplexNumber
{
public:
    double real;
    double imaginary;
    ComplexNumber(double rel, double img);
    ComplexNumber(double rel);
    ComplexNumber operator+(const ComplexNumber &other) const;
    ComplexNumber operator-(const ComplexNumber &other) const;
    ComplexNumber operator*(const ComplexNumber &other) const;
    ComplexNumber operator/(const ComplexNumber &other) const;
    ComplexNumber& operator+=(const ComplexNumber &other);
    ComplexNumber& operator-=(const ComplexNumber &other);
    ComplexNumber& operator*=(const ComplexNumber &other);
    ComplexNumber& operator/=(const ComplexNumber &other);
    ComplexNumber& operator=(const ComplexNumber &other);
    bool operator==(const ComplexNumber &other) const;
    bool operator!=(const ComplexNumber &other) const;
    double amplitude();
    double phase();
};

std::ostream &operator<<(std::ostream &os, const ComplexNumber &other);
ComplexNumber operator+(double num, const ComplexNumber& obj);
ComplexNumber operator-(double num, const ComplexNumber& obj);
ComplexNumber operator*(double num, const ComplexNumber& obj);
ComplexNumber operator/(double num, const ComplexNumber& obj);
bool operator==(double num, const ComplexNumber& obj);
bool operator!=(double num, const ComplexNumber& obj);
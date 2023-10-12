

class ComplexNumber {
    int real;
    int imaginary;
    ComplexNumber(int rel = 0, int img = 0);
    ComplexNumber operator+(ComplexNumber& other) const;
    ComplexNumber operator-(ComplexNumber& other) const;
    ComplexNumber operator*(ComplexNumber& other) const;
    ComplexNumber operator/(ComplexNumber& other) const;
    ComplexNumber operator=(ComplexNumber& other) const;
    double amplitude();
    double phase();
};
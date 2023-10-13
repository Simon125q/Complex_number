

class ComplexNumber
{
    public:
    
    double real;
    double imaginary;
    ComplexNumber(double rel = 0, double img = 0);
    ComplexNumber operator+(ComplexNumber &other) const;
    ComplexNumber operator-(ComplexNumber &other) const;
    ComplexNumber operator*(ComplexNumber &other) const;
    ComplexNumber operator/(ComplexNumber &other) const;
    void operator=(ComplexNumber &other);
    bool operator==(ComplexNumber &other) const;
    bool operator!=(ComplexNumber &other) const;
    double amplitude();
    double phase();
};

ostream& operator<<(ostream& os, const ComplexNumber &other);
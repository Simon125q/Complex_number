#include <iostream>
#include "Complex.h"

using namespace std;

void testAddition();
void testSubtraction();
void testMultiplication();
void testDivision();
void testPhaseAndAmplitude();
void testExamples();

int main()
{
    testAddition();
    testSubtraction();
    testMultiplication();
    testDivision();
    testPhaseAndAmplitude();
    testExamples();

    return 0;
}

void testAddition()
{
    cout << "TEST 1" << endl
         << endl;

    ComplexNumber comp1(12, 13);
    ComplexNumber comp2(21.3, 1.8);
    ComplexNumber comp3(2, 1);
    ComplexNumber comp4(-12, -43);

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;

    comp3 = comp1 + comp2;

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;

    comp2 += comp1;

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;
}

void testSubtraction()
{
    cout << "\nTEST 2" << endl
         << endl;

    ComplexNumber comp1(12, 13);
    ComplexNumber comp2(21.3, 1.8);
    ComplexNumber comp3(2, 1);
    ComplexNumber comp4(-12, -43);

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;

    comp3 = comp1 - comp2;

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;

    comp1 -= comp2;

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;
}

void testMultiplication()
{
    cout << "\nTEST 3" << endl
         << endl;

    ComplexNumber comp1(12, 13);
    ComplexNumber comp2(21.3, 1.8);
    ComplexNumber comp3(2, 1);
    ComplexNumber comp4(-12, -43);

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;

    comp3 = comp1 * comp2;

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;

    comp2 *= comp1;

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;
}

void testDivision()
{
    cout << "\nTEST 4" << endl
         << endl;

    ComplexNumber comp1(12, 13);
    ComplexNumber comp2(21.3, 1.8);
    ComplexNumber comp3(2, 1);
    ComplexNumber comp4(-12, -43);

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;

    comp3 = comp1 / comp2;

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;

    comp1 /= comp2;

    cout << "comp 3: " << comp3 << ", comp 2: " << comp2 << ", comp 1: " << comp1 << endl;
}

void testPhaseAndAmplitude()
{
    cout << "\nTEST 5" << endl
         << endl;

    ComplexNumber comp1(12, 13);
    ComplexNumber comp2(21.3, 1.8);

    cout << "comp 1 amplitude: " << comp1.amplitude() << endl;
    cout << "comp 1 phase: " << comp1.phase() << endl;

    cout << "comp 2 amplitude: " << comp1.amplitude() << endl;
    cout << "comp 2 phase: " << comp1.phase() << endl;
}

void testExamples()
{
    cout << "\nTEST 6" << endl
         << endl;

    ComplexNumber a(12, 13);
    ComplexNumber b(21.3, 1.8);
    ComplexNumber c(2, 1);
    ComplexNumber res(0);
    bool bres;

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    a += b += c;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    (a += b) += c;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    a *= b *= c;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    (a *= b) *= c;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    res = a + 7;
    cout << "res:" << res << endl;
    res = 7 + a;
    cout << "res:" << res << endl;
    res = b * 5;
    cout << "res:" << res << endl;
    res = 5 * b;
    cout << "res:" << res << endl;
    bres = (c == 3.5);
    cout << "c == 3.5: " << bres << endl;
    bres = (3.5 == c);
    cout << "3.5 == c: " << bres << endl;
    bres = (c != 3.5);
    cout << "c != 3.5: " << bres << endl;
    bres = (3.5 != c);
    cout << "3.5 != c: " << bres << endl;
    
}

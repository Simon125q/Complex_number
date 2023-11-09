#include <iostream>
#include "Complex.h"

using namespace std;

void testAddition();
void testSubtraction();
void testMultiplication();
void testDivision();
void testPhaseAndAmplitude();
void testComparison();
void testExamples1();
void testExamples2();

int main()
{
    testAddition();
    testSubtraction();
    testMultiplication();
    testDivision();
    testPhaseAndAmplitude();
    testComparison();
    testExamples1();
    testExamples2();

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
    void testExamples1();
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
    ComplexNumber comp2(-12, 13);
    ComplexNumber comp3(12, -13);
    ComplexNumber comp4(-12, -13);

    cout << "comp 1 amplitude: " << comp1.amplitude() << endl;
    cout << "comp 1 phase: " << comp1.phase() << endl;

    cout << "comp 2 amplitude: " << comp2.amplitude() << endl;
    cout << "comp 2 phase: " << comp2.phase() << endl;

    cout << "comp 3 amplitude: " << comp3.amplitude() << endl;
    cout << "comp 3 phase: " << comp3.phase() << endl;

    cout << "comp 4 amplitude: " << comp4.amplitude() << endl;
    cout << "comp 4 phase: " << comp4.phase() << endl;
}

void testComparison()
{
    cout << "\nTEST 6" << endl
         << endl;

    ComplexNumber a(12, 13);
    ComplexNumber b(12, 13);
    bool res;

    res = (a == 3.5);
    cout << "a == 3.5: " << res << endl;
    res = (3.5 == a);
    cout << "3.5 == a: " << res << endl;
    res = (a != 3.5);
    cout << "a != 3.5: " << res << endl;
    res = (3.5 != a);
    cout << "3.5 != a: " << res << endl;
    res = (b == a);
    cout << "b == a: " << res << endl;
    res = (a != b);
    cout << "a != b: " << res << endl;
}

void testExamples1()
{
    cout << "\nTEST 7" << endl
         << endl;

    ComplexNumber a(12, 13);
    ComplexNumber b(21.3, 1.8);
    ComplexNumber c(2, 1);
    ComplexNumber res(0);

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    a += b += c;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    (a += b) += c;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    a *= b *= c;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    (a *= b) *= c;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
}

void testExamples2()
{
    cout << "\nTEST 8" << endl
         << endl;

    ComplexNumber a(12, 13);
    ComplexNumber b(21.3, 1.8);
    ComplexNumber res(0);

    cout << "a: " << a << ", b: " << b << endl;
    res = a + 7;
    cout << "res:" << res << endl;
    res = 7 + a;
    cout << "res:" << res << endl;
    res = b * 5;
    cout << "res:" << res << endl;
    res = 5 * b;
    cout << "res:" << res << endl;
}

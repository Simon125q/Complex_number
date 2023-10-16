#include <iostream>
#include "Complex.h"

using namespace std;

void test1();
void test2();
void test3();
void test4();
void test5();

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    
    return 0;
}

void test1()
{
    cout << "TEST 1" << endl << endl;

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

void test2()
{
    cout << "\nTEST 2" << endl << endl;

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

void test3()
{
    cout << "\nTEST 3" << endl << endl;

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

void test4()
{
    cout << "\nTEST 4" << endl << endl;

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

void test5()
{
    cout << "\nTEST 5" << endl << endl;

    ComplexNumber comp1(12, 13);
    ComplexNumber comp2(21.3, 1.8);

    cout << "comp 1 amplitude: " << comp1.amplitude() << endl;
    cout << "comp 1 phase: " << comp1.phase() << endl;

    cout << "comp 2 amplitude: " << comp1.amplitude() << endl;
    cout << "comp 2 phase: " << comp1.phase() << endl;
}


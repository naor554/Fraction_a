#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Initialize Fraction"){
    CHECK_THROWS(Fraction(2,0));
    CHECK_THROWS(Fraction(0,0));
    CHECK_NOTHROW(Fraction(1,2));
    CHECK_NOTHROW(Fraction(0,2));
}

TEST_CASE("Aritmethic Operators"){
    Fraction a(5,3), b(14,21);
    CHECK((a + b) == Fraction(7,3));
    CHECK((a - b) == Fraction(3,3));
    CHECK((a * b) == Fraction(10,9));
    CHECK((a / b) == Fraction(5,2));

}

TEST_CASE("Comparison Operators"){
    Fraction a(5,3), b(14,21);
    CHECK((a < b) == false);
    CHECK((a > b) == true);
    CHECK((a <= b) == false);
    CHECK((a >= b) == true);

}

TEST_CASE("Reduce Of Fraction"){
    Fraction a(3,6), b(7,21), c(11,44), d(15,15);
    CHECK(a == Fraction(1,2));
    CHECK(b == Fraction(1,3));
    CHECK(c == Fraction(1,4));
    CHECK(d == 1);
}

TEST_CASE("Pre/Post increment"){
    Fraction a(2,3);
    Fraction b = ++a;
    CHECK(b == Fraction(5,3));
    CHECK(a == Fraction(5,3));
    Fraction c = a++;
    CHECK(c == Fraction(5,3));
    CHECK(a == Fraction(8,3));
}

TEST_CASE("Pre/Post decrement"){
    Fraction a(8,3);
    Fraction b = --a;
    CHECK(b == Fraction(5,3));
    CHECK(a == Fraction(5,3));
    Fraction c = a--;
    CHECK(c == Fraction(5,3));
    CHECK(a == Fraction(2,3));
}


TEST_CASE("IO Operators"){
    Fraction a(5,3), b(14,21);
    CHECK_NOTHROW(cout << "a: " << a << "b: " << b << endl);
    CHECK_NOTHROW(cout << "2.3*b" << 2.3*b << endl);
    CHECK_NOTHROW(cout << "a+2.421" << a+2.421 << endl);

}



#include <iostream>


#pragma once

#ifndef EX3_CPP_A_FRACTION_H
#define EX3_CPP_A_FRACTION_H
#endif //EX3_CPP_A_FRACTION_H

using namespace std;


namespace ariel{
    
    class Fraction {
    
    private:
        int numerator;
        int denominator;
        void reduce();
        int gcd(int num1, int num2);

    public:
        Fraction(int num, int den); // constructor
        
        // arithmetic operators
        friend Fraction operator+(const Fraction& frac1, const Fraction& frac2);
        friend Fraction operator-(const Fraction& frac1, const Fraction& frac2);
        friend Fraction operator*(const Fraction& frac1, const Fraction& frac2);
        friend Fraction operator/(const Fraction& frac1, const Fraction& frac2);

        // comparison operators
        friend bool operator==(const Fraction& frac1, const Fraction& frac2);
        friend bool operator!=(const Fraction& frac1, const Fraction& frac2);
        friend bool operator>(const Fraction& frac1, const Fraction& frac2);
        friend bool operator<(const Fraction& frac1, const Fraction& frac2);
        friend bool operator>=(const Fraction& frac1, const Fraction& frac2);
        friend bool operator<=(const Fraction& frac1, const Fraction& frac2);

        // increment and decrement operators
        Fraction& operator++(); // prefix
        Fraction operator++(int); // postfix
        Fraction& operator--(); // prefix
        Fraction operator--(int); // postfix

        // conversion functions
        explicit operator float() const; // float
        explicit operator double() const; // double

        // input and output operators
        friend std::ostream& operator<<(std::ostream& ostm, const Fraction& frac);
        friend std::istream& operator>>(std::istream& istm, Fraction& frac);
    };

    // arithmetic operators with float
        Fraction operator+(const Fraction& frac, float num);
        Fraction operator+(float num, const Fraction& frac);
        Fraction operator-(const Fraction& frac, float num);
        Fraction operator-(float num, const Fraction& frac);
        Fraction operator*(const Fraction& frac, float num);
        Fraction operator*(float num, const Fraction& frac);
        Fraction operator/(const Fraction& frac, float num);
        Fraction operator/(float num, const Fraction& frac);
        bool operator==(const Fraction& frac, float num);
        bool operator==(float num, const Fraction& frac);
        bool operator!=(const Fraction& frac, float num);
        bool operator!=(float num, const Fraction& frac);
        bool operator>(const Fraction& frac, float num);
        bool operator>(float num, const Fraction& frac);
        bool operator<(const Fraction& frac, float num);
        bool operator<(float num, const Fraction& frac);
        bool operator>=(const Fraction& frac, float num);
        bool operator>=(float num, const Fraction& frac);
        bool operator<=(const Fraction& frac, float num);
        bool operator<=(float num, const Fraction& frac);
}

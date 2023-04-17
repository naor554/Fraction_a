#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "Fraction.hpp"



namespace ariel{

    // constructor 
    Fraction::Fraction(int num, int den){
        if(den == 0){
            throw string("denominutor can't be equal to 0\n");
        }
       
    }



    // functions for reducing 
    void Fraction::reduce(){

    }

    int Fraction::gcd(int a, int b){
        
        return 1;
    }



    // arithmetic operators
    Fraction operator+(const Fraction& frac1, const Fraction& frac2){
       
        return Fraction(1, 1);
    }

    Fraction operator-(const Fraction& frac1, const Fraction& frac2){
        
        return Fraction(1,1);
    }

    Fraction operator*(const Fraction& frac1, const Fraction& frac2){
       
        return Fraction(1,1);
    }

    Fraction operator/(const Fraction& frac1, const Fraction& frac2){
        
        return Fraction(1,1);
    }



    // comparison operators
    bool operator==(const Fraction& frac1, const Fraction& frac2){
        return false;
    }

    bool operator>(const Fraction& frac1, const Fraction& frac2){
        
        return false;
    }

    bool operator<(const Fraction& frac1, const Fraction& frac2){
        return false;
    }

    bool operator>=(const Fraction& frac1, const Fraction& frac2){
        return false;
    }

    bool operator<=(const Fraction& frac1, const Fraction& frac2){
        return false;
    }

     // increment and decrement operators
    Fraction& Fraction::operator++(){
        
        return *this;
    }

    Fraction Fraction::operator++(int){
        return Fraction(1,1);
    }

    Fraction& Fraction::operator--(){
        
        return *this;
    }

    Fraction Fraction::operator--(int){
        return Fraction(1,1);

    }

    // input and output operators
    ostream& operator<<(std::ostream& os, const Fraction& frac){
       return (os << frac.numerator << '/' << frac.denominator);
    }

    ostream& operator>>(std::ostream& os, Fraction& frac){
        return (os >> frac) ;
    }


    // arithmetic operators with float
    Fraction operator+(const Fraction& frac, const float num) {
        return Fraction(1,1);
    }

    Fraction operator+(const float num, const Fraction& frac) {
       return Fraction(1,1);
    }

    Fraction operator-(const Fraction& frac, const float num) {
       return Fraction(1,1);
    }

    Fraction operator-(const float num, const Fraction& frac) {
        return Fraction(1,1);
    }

    Fraction operator*(const Fraction& frac, const float num) {
        return Fraction(1,1);
    }

    Fraction operator*(const float num, const Fraction& frac) {
       return Fraction(1,1);
    }

    Fraction operator/(const Fraction& frac, const float num) {
        return Fraction(1,1);
    }

    Fraction operator/(const float num, const Fraction& frac) {
       return Fraction(1,1);
    }

    // comparison operators with float
    bool operator==(const Fraction& frac, const float num) {
        return false;
    }

    bool operator==(const float num, const Fraction& frac) {
        return false;
    }

    bool operator!=(const Fraction& frac, const float num) {
        return false;
    }

    bool operator!=(const float num, const Fraction& frac) {
        return false;
    }

    bool operator>(const Fraction& frac, const float num) {
        return false;
    }

    bool operator>(const float num, const Fraction& frac) {
        return false;
    }

    bool operator<(const Fraction& frac, const float num) {
       return false;
    }

    bool operator<(const float num, const Fraction& frac) {
        return false;
    }

    bool operator>=(const Fraction& frac, const float num) {
        return false;
    }

    bool operator>=(const float num, const Fraction& frac) {
        return false;
    }

    bool operator<=(const Fraction& frac, const float num) {
        return false;
    }

    bool operator<=(const float num, const Fraction& frac) {
       return false;
    }


}

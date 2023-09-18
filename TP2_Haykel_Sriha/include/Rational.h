#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
private : 
    long int num , denom ;
public :
    Rational ();
    Rational (long int num, long int denom);
    Rational (const Rational & rational);
    Rational(long int num);
    long int getNumerator() const {
        return num ;
    }
    long int getDenominator() const {
        return denom ;
    }
    long int getSign() const;
    void showRational ();
    Rational reverse();
    Rational power(long int pow);
    Rational add(const Rational &r1, const Rational &r2);
    Rational substract(const Rational &r1, const Rational &r2);
    Rational multiply(const Rational &r1, const Rational &r2);
    Rational divide(const Rational &r1, const Rational &r2);
};

#endif
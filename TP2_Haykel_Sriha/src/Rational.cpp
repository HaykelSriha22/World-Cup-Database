#include "../include/Rational.h"
using namespace std;

Rational :: Rational(){
    num = 1;
    denom = 1;
}

Rational :: Rational( long int num, long int denom) {
    this->num = num;
    this->denom = denom;
}

Rational :: Rational(const Rational & rational){
    this->num = rational.num;
    this->denom = rational.denom;
}
 long int Rational:: getSign() const {
    if (((this->num > 0) && (this->denom > 0)) || ((this->num < 0) && (this->denom < 0))) {
        return 1 ;
    }
    else {
        return -1 ;
    }
}
void Rational :: showRational() const {
    cout << this->num << " / " << this->denom ;
}

Rational Rational :: reverse() const {
    Rational result = *this;
    long int buffer;

    buffer = result.num ;
    result.num = result.denom ; 
    result.denom = buffer;

    return result;
}

Rational Rational :: power(long int pow) const {
    if (pow == 0) {
        return Rational(1,1);
    }
    if (pow < 0) {
        return reverse().power(-pow);
    }
    if (pow % 2 == 0) { 
        
        return multiply(power(pow / 2), power(pow / 2)); 
    } else {
        
        return multiply(power(pow -1), *this); 
    }
}



Rational add(const Rational &r1, const Rational &r2) {
    return Rational( (r1.getNumerator() * r2.getDenominator() ) + ( r2.getNumerator() * r1.getDenominator() ), ( r1.getDenominator() * r2.getDenominator() ) );
}

Rational substract(const Rational &r1, const Rational &r2) {
    return Rational( (r1.getNumerator() * r2.getDenominator() ) - ( r2.getNumerator() * r1.getDenominator() ), ( r1.getDenominator() * r2.getDenominator() ) );
}

Rational multiply(const Rational &r1, const Rational &r2){
    return (Rational(r1.getNumerator() * r2.getNumerator(), r1.getDenominator() * r2.getDenominator()));
}

Rational divide(const Rational &r1, const Rational &r2) {
    return (multiply(r1,r2.reverse()));
}








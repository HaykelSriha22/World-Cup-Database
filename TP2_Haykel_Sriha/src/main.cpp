#include "../include/Rational.h"
using namespace std;

int main() {
    // Création de deux rationnels
    Rational r1(1, 2);  // 1/2
    Rational r2(2, 3);  // 2/3
    
    // Affichage des rationnels
    cout << "R1 = ";
    r1.showRational();
    cout << endl;

    cout << "R2 = ";
    r2.showRational();
    cout << endl;

    // Addition
    Rational sum = add(r1, r2);
    cout << "R1 + R2 = ";
    sum.showRational();
    cout << endl;

    // Soustraction
    Rational diff = substract(r1, r2);
    cout << "R1 - R2 = ";
    diff.showRational();
    cout << endl;

    // Multiplication
    Rational prod = multiply(r1, r2);
    cout << "R1 * R2 = ";
    prod.showRational();
    cout << endl;

    // Division
    Rational quotient = divide(r1, r2);
    cout << "R1 / R2 = ";
    quotient.showRational();
    cout << endl;

    // Puissance
    Rational rPower = r1.power(3);
    cout << "R1 ^ 3 = ";
    rPower.showRational();
    cout << endl;

    // Signe
    long int sign = r1.getSign();
    cout << "Sign of R1 = " << sign << endl;

    // Inverse
    Rational rInverse = r1.reverse();
    cout << "Inverse of R1 = ";
    rInverse.showRational();
    cout << endl;

    return 0;
}

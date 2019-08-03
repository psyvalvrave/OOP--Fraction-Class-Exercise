#ifndef HW02_H
#define HW02_H
#include<QString>
#include<QTextStream>
#include<algorithm>
#include<iostream>
using namespace std;

class Fraction{
    friend Fraction operator+(const Fraction& m,const Fraction& n);
    friend Fraction operator-(const Fraction& m,const Fraction& n);
    friend Fraction operator*(const Fraction& m,const Fraction& n);
    friend Fraction operator/(const Fraction& m,const Fraction& n);
    friend ostream& operator<<(ostream& cout, const Fraction& n);
    friend double operator+(const Fraction& m,double n);
    friend double operator-(const Fraction& m,double n);
    friend double operator*(const Fraction& m,double n);
    friend double operator/(const Fraction& m,double n);
    friend double operator+(double n,const Fraction& m);
    friend double operator-(double n,const Fraction& m);
    friend double operator*(double n,const Fraction& m);
    friend double operator/(double n,const Fraction& m);
public:
    Fraction(){
        m_Numerator=0;
        m_Denominator=1;
    }
    Fraction(int nn, int nd){
        QTextStream cout(stdout);
        if(nd==0){
            cout<<"denominator cannot be zero"<<endl;
            exit(0);
        }
        //using gcd from algorithm so I can calculate negetive fraction
        m_Numerator = nn/(__gcd(nn,nd));
        m_Denominator = nd/(__gcd(nn,nd));
    }
    void set(int nn, int nd);
    double toDouble()const;
    QString toString() const;
    Fraction add(Fraction);
    Fraction subtract(Fraction);
    Fraction mutiply(Fraction);
    Fraction divide(Fraction);
private:
    int m_Numerator;
    int m_Denominator;
};
#endif // HW02_H

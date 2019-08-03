/*extention of hw02 with more operators, make sure the fraction can interact
 * with double(or int) number*/
#include<hw02.h>
using namespace std;
    Fraction operator+(const Fraction& m,const Fraction& n){
        Fraction res((m.m_Numerator*n.m_Denominator+n.m_Numerator*m.m_Denominator),
                     (n.m_Denominator*m.m_Denominator));
        return res;
    }

    Fraction operator-(const Fraction& m,const Fraction& n){
        Fraction res((m.m_Numerator*n.m_Denominator-n.m_Numerator*m.m_Denominator),
                     (n.m_Denominator*m.m_Denominator));
        return res;
    }
    Fraction operator*(const Fraction& m,const Fraction& n){
        Fraction res((m.m_Numerator*n.m_Numerator),
                      n.m_Denominator*m.m_Denominator);
        return res;
    }
    Fraction operator/(const Fraction& m,const Fraction& n){
        Fraction res((m.m_Numerator*n.m_Denominator),
                     (n.m_Numerator*m.m_Denominator));
        return res;
    }
    /*not sure how to use QTextstream here to print directly, so I just use
     * ostream from iostream*/
    ostream& operator<<(ostream& cout,const Fraction& n){
        cout<<n.m_Numerator<<'/'<<n.m_Denominator;
        return cout;
    }
    /*since most fraction is number with decimal point, I am using double
    instead of int(though exercise suggest to use int)*/
    double operator+(const Fraction& m,double n){
        return m.toDouble()+n;
    }
    double operator-(const Fraction& m,double n){
        return m.toDouble()-n;
    }
    double operator*(const Fraction& m,double n){
        return m.toDouble()*n;
    }
    double operator/(const Fraction& m,double n){
        return m.toDouble()/n;
    }
    //operator with double number in the other way
    double operator+(double n,const Fraction& m){
        return m.toDouble()+n;
    }
    double operator-(double n,const Fraction& m){
        return m.toDouble()-n;
    }
    double operator*(double n,const Fraction& m){
        return m.toDouble()*n;
    }
    double operator/(double n,const Fraction& m){
        return m.toDouble()/n;
    }



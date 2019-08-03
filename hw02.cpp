#include<hw02.h>
using namespace std;
void Fraction::set(int nn, int nd){
    //using gcd from algorithm so I can calculate negetive fraction
    m_Numerator = nn/(__gcd(nn,nd));
    m_Denominator = nd/(__gcd(nn,nd));
}

double Fraction::toDouble()const{
    return 1.0 * m_Numerator/m_Denominator;
}

QString Fraction::toString() const{
    return QString("%1/%2").arg(m_Numerator).arg(m_Denominator);
}

Fraction Fraction::add(Fraction n){
    return Fraction((m_Numerator*n.m_Denominator+n.m_Numerator*m_Denominator),
                    (n.m_Denominator*m_Denominator));
}
Fraction Fraction::subtract(Fraction n){
    return Fraction((m_Numerator*n.m_Denominator-n.m_Numerator*m_Denominator),
                    n.m_Denominator*m_Denominator);
}
Fraction Fraction::mutiply(Fraction n){
    return Fraction((m_Numerator*n.m_Numerator),
                    n.m_Denominator*m_Denominator);

}
Fraction Fraction::divide(Fraction n){
    return Fraction((m_Numerator*n.m_Denominator),
                    (n.m_Numerator*m_Denominator));
}





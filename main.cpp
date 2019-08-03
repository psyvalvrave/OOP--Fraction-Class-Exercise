/*Zhecheng Li
 * HW02
 * HW2 Extension
 * 3/6/19*/
#include<hw02.h>
using namespace std;
int main(){
    QTextStream out(stdout);
    Fraction a,b,c,d,f1,f2,f3,f4;
    double d1,d2,d3,d4;
    a.set(1,9);
    b.set(1,6);
    d.set(1,9);
    c=a/b/d;
    d1=2+a+b;
    f1=a-b;
    f2=a-b-c;
    f3=a*b*c;
    f4=a/b/c;
    d2=f4*f3/5;
    d3=f4+f2*3;
    d4=(f4+f2)*3;
    cout<<d1<<'\t'<<f1<<endl;
    cout<<f2<<"\t"<<f3<<"\t"<<f4<<endl;
    out<<f2.toDouble()+d1<<endl;
    cout<<d2<<endl;
    cout<<d3<<endl;
    cout<<d4<<endl;
    return 0;
}


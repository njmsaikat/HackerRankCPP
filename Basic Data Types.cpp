#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long l;
    char b[10];
    float c;
    double d;
    cin>>a>>l>>b>>c>>d;
    cout<<a<<"\n"<<l<<"\n"<<b<<"\n"<<fixed<<setprecision(3)<<c<<endl;
    cout<<fixed<<setprecision(9)<<d<<endl;
    // Complete the code.
    return 0;
}

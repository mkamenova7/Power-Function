#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"Type two numbers - a (real number) and n (natural number) and i'll give you a to the power of n";
    double a;
    int n;
    double x;
    cin>>a>>n;
    x=pow(a,n);
    cout<<x;
    return 0;
}

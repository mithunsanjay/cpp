#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;
    cout<<fixed<<setprecision(6) << a<< endl;
    cout<<fixed<<setprecision(3) << a<< endl;
    cout<<fixed<<setprecision(2) << a<< endl;
    cout<<fixed<<setprecision(1) << a;
    return 0;
}

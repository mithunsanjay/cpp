#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double a;
    cin >> a;
    cout<< trunc(a)<< endl;
    cout<<fixed<<setprecision(1)<< ceil(a)<<endl;
    cout<<fixed<<setprecision(1)<< floor(a);
    return 0;
}

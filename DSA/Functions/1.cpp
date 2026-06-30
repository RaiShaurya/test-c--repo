#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact *=i;
    }
    return fact;
}
int binCoeff(int n , int r){
    int value1 = factorial(n);
    int value2= factorial(r);
    int value3= factorial(n-r);
    return value1/(value2*value3);
}
int main(){
    cout <<binCoeff(4,2);
    return 0;
}
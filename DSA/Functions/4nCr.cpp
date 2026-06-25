#include <iostream>
using namespace std;

int fact(int n){
    int fac=1;
    for (int i = 1; i<= n; i++)
    {
        fac*=i;
    }
    return fac;

}
int nCr(int n,int r){
    

    return fact(n) / (fact(r)*fact(n-r)) ;
}
int main(){

    cout << nCr(5,4) << endl;
    return 0;
}
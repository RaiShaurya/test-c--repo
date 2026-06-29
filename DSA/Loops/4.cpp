#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "n= " ;
    cin >> n;
    int res=0; 
    while (n>0)
    {        
        int lastdig = n%10;
        res = res *10 + lastdig ;
        n=n/10;
    }
    cout << "The result is " << res ;
    return 0;
}  
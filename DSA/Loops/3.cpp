#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int lastdig;
    int sum=0;
    while (n>0)
    {
        lastdig = n%10;
        if (lastdig %2 !=0)
        {
            sum += lastdig;
        }
        n=n/10;
    }
    cout << "sum= " << sum << endl;
    return 0;
 }
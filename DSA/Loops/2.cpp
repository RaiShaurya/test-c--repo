#include <iostream>
using namespace std;
int main(){
    int n=10829;
    int digsum=0;
    
    while (n>0)
    {
        int lastdig = n%10;
        digsum += lastdig;
        n=n/10;
    }
    cout << "sum = " << digsum ;
    cout << endl;
    return 0;
    

}
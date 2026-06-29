//Optimised way
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=13;
    bool isPrime =true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            isPrime = false;
            break;

        }

        
    }
    if (isPrime)
    {
        cout << "It is a prime num " << endl;

    }
    else {
        cout << "It is Not a Prime num " << endl;
    }
    
    return 0;
    
}
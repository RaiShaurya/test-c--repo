#include <iostream>
using namespace std;

bool prime(int n){
    
    for (int  i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int main(){
    if (prime(2)){
        cout << "THe number is prime";
    }
    else{
        cout << "The number is not prime";
    }
    return 0;
}

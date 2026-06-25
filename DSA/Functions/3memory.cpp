//Funtion in memory
#include <iostream>
using namespace std;
int sumOfDigits(int num){
    int digitsum=0;
    while (num>0)
    {
        int lastdig = num%10;
        num/=10;
        digitsum +=lastdig;
    }
    return digitsum;

    
}
int main(){
    cout << sumOfDigits(2356) ; 
    return 1;
}
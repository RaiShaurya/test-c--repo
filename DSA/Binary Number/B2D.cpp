#include <iostream>








using namespace std;
int D2B(int decimal){
    int ans=0;
    int pow=1;
    while (decimal>0)
    {
        int rem=decimal%2;
        decimal /=2;
        ans+=(rem*pow) ;
        pow*=10;    
    }
    return ans;
   
}
int main(){

    cout << D2B(50) << endl;
    return 0;
}






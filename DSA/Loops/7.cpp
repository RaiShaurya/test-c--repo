#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int table=1;
    for (int i =1; i < 11; i++)
    {
        cout << n << "x" << i << "= " << n*i << endl;
        
    }
    return 0;
}  
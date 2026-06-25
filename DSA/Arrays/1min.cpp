#include <iostream>
#include <climits>
using namespace std;
int arr[]={5,13,5342,-34,0,-1};
int size = 6;

int smallest=INT_MAX;
int main(){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
        
    }
    cout<< smallest << endl;
}
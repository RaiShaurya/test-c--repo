#include <iostream>
using namespace std;

int add(int arr[],int sz){
    int sum=0;
    for (int  i = 0; i < sz; i++)
    {   
        sum+=arr[i];
        
    }
    return sum;
}

int into(int arr[],int sz){
    int product=1;
    for (int i = 0; i < sz; i++)
    {
        product*=arr[i];
        
             
    }
    return product;
}
int main(){
    int arr[]={4,5,21,9,92};
    int sz=sizeof(arr)/sizeof(arr[0]);
    cout << add(arr,sz) << endl;
    cout << into(arr,sz);
    return 0;
}
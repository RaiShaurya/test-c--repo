#include <iostream>
#include <climits>
using namespace std;
int min(int arr[], int sz){
    int smallest=INT_MAX ;
    for (int i = 0; i < sz; i++)
    {
        if (smallest>arr[i])
        {
            smallest=arr[i];
        }
        
    }
    return smallest;
    
}
int max(int arr[],int sz){
    int largest=INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        if (largest<arr[i])
        {
            largest=arr[i];
        }
        
    }
    return largest;
}
int main(){
    int arr[]={34,41,59,9,0,43};
    int sz=sizeof(arr)/sizeof(arr[0]);
    cout << min(arr,sz) << endl;
    cout << max(arr,sz)<<endl;
    int mx= max(arr,sz);
    int mn=min(arr,sz);
    swap(mx,mn);
    cout << mn << endl;
    cout << mx << endl;

    

    return 0;



}

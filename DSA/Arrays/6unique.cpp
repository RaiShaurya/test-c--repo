#include <iostream>
using namespace std;
int unique(int arr[],int sz){
    for (int  i = 0; i < sz; i++)
    {
        int count=0;
        for (int j = 0; j < sz; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        
        }
        if (count==1)
        {
            return arr[i];
        }
         
        
    }
    return -1;
    
}
int main(){
    int arr[]={1,4,5,13,1};
    int sz=sizeof(arr)/sizeof(arr[0]);
    cout << "The unique number is " << unique(arr,sz) << endl;
    return 0;
}
#include <iostream>
using namespace std;
int linearsearch(int arr[],int sz, int target){
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i; 
        }
        
    }
    return -1;
}
    
int main(){
    int arr[]={3,5,14,9,49,8,34};
    
    cout<<linearsearch(arr,7,89)<< endl;
    return 0;


}
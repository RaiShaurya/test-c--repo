/*1.
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    for (int  i = 0; i <n; i++)
    {
        for (int j = 0; j<i+1 ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}*/
/*2.
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    for (int  i = 0; i <n; i++)
    {
        for (int j = 0; j<i+1 ; j++)
        {
            cout << i+1;
        }
        cout << endl;
    }

    return 0;
}*/
/*3.#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    for (int  i = 0; i <n; i++)
    {
        for (int j = 1; j<=i+1 ; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}*/
/*4#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    for (int  i = 0; i <n; i++)
    {
        for (int j = i+1; j>0 ; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}*/

//Floyds triangle 
/*4
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int num=1;
    for (int  i = 0; i <n; i++)
    {
        for (int j = 0; j<i+1 ; j++)
        {
            
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}*/

/*5.
#include <iostream>
using namespace std;

int main(){

        
    int n;
    cin >> n;
    for (int  i = 0; i <n; i--)
    {
        for (int j = i+1; j>0 ; j--)
        {
            
            cout << i+1;
        }
        cout << endl;
    }

    return 0;
}  */
/* 6
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }
        for (int  j = 0; j< n-i; j++)
        {
            cout << i+1;
        }

        cout << endl;
        
        
    }
    


    return 0;
}*/


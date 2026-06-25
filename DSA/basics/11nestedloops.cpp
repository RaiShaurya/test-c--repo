#include <iostream>
using namespace std;

int main() {
    int i, n = 10;

    for (i = 1; i <= n; i++) {
        int m = 5;

        for (int j = 1; j <= m; j++) {  
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
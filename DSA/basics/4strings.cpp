#include <iostream>
using namespace std ;
int main()
{
    string phrase = "Giraffe Academy";
    //               01234   
    //phrase[0]='B';
    //cout << phrase;
    //cout<< phrase;//prints a
    //cout<< phrase.find("Academy", 0);//finds where the code starts from 
    cout<< phrase.substr(8, 3);// 8 is the starting index and 3 is the total index to cut from
    




    return 0 ;

}  
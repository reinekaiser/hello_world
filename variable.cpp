#include <iostream>
using namespace std;
int x=7;
int main (){
    cout << x << endl;
    int a=22;
    {
        int x=9;
        a=11;
        cout << a <<endl;
        cout << x <<endl;
        cout << ::x <<endl;
        ::x=12;
    }
    cout <<a<< endl;
    cout << x <<endl;
    return 0;
}
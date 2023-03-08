#include <iostream>
using namespace std;
int main (){
    char ch='b';
    switch (ch){
        case 'a':
            cout <<"a";
            
        case 'b':
            cout << "b";
            
        default :
            cout <<"khac";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main (){
    int a=5;
    int *ptr1=&a;
    int **ptr2=&ptr1;

    cout <<a<<endl;
    cout <<&a<<endl;
    cout <<"--------------"<<endl;
    cout <<ptr1<<endl;
    cout <<*ptr1<<endl;
    cout <<&ptr1<<endl;
    cout <<"--------------"<<endl;
    cout <<ptr2<<endl;
    cout <<*ptr2<<endl;
    cout <<**ptr2<<endl;
    return 0;
}
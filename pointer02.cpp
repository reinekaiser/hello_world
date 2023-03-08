#include <iostream>
using namespace std;
void ham(int *a){
    a=new int;
    *a=10;
}
int main (){
    int a=5;
    int *ptr_a=&a;
    cout <<*ptr_a<<endl;

    ham(ptr_a);
    cout << *ptr_a<<endl;

    return 0;
}
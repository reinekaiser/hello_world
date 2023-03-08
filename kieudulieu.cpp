#include <iostream>
using namespace std;
int main (){
    //--------------------------------------------------
    cout <<"int: "<< sizeof (short)<<"\t"<<sizeof(short int)<<"\t";
    cout << sizeof (int)<<"\t"<<sizeof(long int)<<"\t"<<sizeof(long long int)<<"\n";
    cout <<"long: "<< sizeof (long)<<"\t"<<sizeof(long long)<<"\n";

    //---------------------------------------------------
    double u[]={7.3, 11.5, 23.6, -6.8, -8.67, 23.599};
    int n;
    cout << sizeof(u)<<endl;
    cout << sizeof(u[0])<<endl;
    n = sizeof(u)/sizeof(u[0]);
    cout <<n;

    return 0;

}
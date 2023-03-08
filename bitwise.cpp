#include <iostream>
using namespace std;
int main (){
    char A=45, B=58;
    char result;
    result = A & B;
    cout <<" A&B= "<< int (result) <<endl;
    result = A | B;
    cout <<" A|B= "<< int (result) <<endl;
    result = A ^ B;
    cout <<" A^B= "<< int (result) <<endl;
    result = ~A;
    cout <<" ~A= "<< int (result) <<endl;
    result = A << 4;
    cout <<" A<<4= "<< int (result) <<endl;
    result = A >> 4;
    cout <<" A>>4= "<< int (result) <<endl;
    return 0;
}
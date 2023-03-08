#include <iostream>
using namespace std;
typedef struct diem
{
 float x;
 float y;
}DIEM;
void nhap(DIEM &a)
{
 cin >> a.x;
 cin >> a.y;
}
int xuat(DIEM a)
{
    return a.x;
}
int main()
{
 DIEM B;
 nhap(B);
 cout << xuat(B);
 return 0;
}
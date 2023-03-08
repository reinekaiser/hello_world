#include <iostream>
using namespace std;
#define MAXN 300
void Input(int &n){
    cin >>n;
}
void NhapMang(int arr[], int n){
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}
void SapXepGiamDan(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min=i;
        for (int j=i+1; j<n; j++){
            if (arr[j]>arr[min]) min =j;
        }
        swap(arr[i],arr[min]);
    }
}
void XuatMang(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i]<<"\t";
    }
}

    
int main() {
    int a[MAXN], n;
    Input(n);
    NhapMang(a, n);
    SapXepGiamDan(a, n);
    XuatMang(a, n);
    return 0;
}


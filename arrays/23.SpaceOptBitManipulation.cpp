#include <bits/stdc++.h>
using namespace std;

//index >> 5 == index / 32
//index & 32 == index % 32

bool checkBits(int arr[], int index){
    return arr[index >> 5] & (1 << (index & 32));
}
void setBits(int arr[], int index){
    arr[index >> 5] = (1 << (index & 32));
}

int main(){
    int a = 2, b = 5;
    int size = abs(b - a);
    size = ceil(size / 32);
    int* arr = new int[size];

    for(int i = a; i <= b; i++)
        if(i % 2 == 0 || i % 5 == 0)
            setBits(arr, i - a);

    for(int i = a; i <= b; i++)
        if(checkBits(arr, abs(i - a)))
            cout << i << " ";
        
    return 0;
}
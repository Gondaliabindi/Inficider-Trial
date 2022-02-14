

/*Write a program to print binary equivalent of a decimal number using array.*/

#include<iostream>
using namespace std;
int main(){
    int arr1[10], num;
    cout << "Number: ";
    cin >> num;
    for (int i=0; num>0; i++){
        arr[i]=num%2;
        num=num/2;
    }
    cout << "Binary: ";
    for (i=i-1; i>=0; i--){
        cout << arr[i];
    }
}
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char arr[100];
   // cin>>arr; // not read spaces
    // cout<<arr;
   // getline(cin,arr);
    cin.getline(arr,100); //read after spaces
    cout<<arr;
}
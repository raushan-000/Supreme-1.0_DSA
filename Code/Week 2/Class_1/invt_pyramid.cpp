// Inverted Full Pyramid

#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    //outer loop
    for(int row=0; row<n; row =row+1)
    {
        //inner loop
        //spaces
        for (int col = 0; col<row; col=col+1)
        {
           cout<<" ";
        }

        // satrs
        for(int col = 0; col < n-row; col= col + 1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }    
}        
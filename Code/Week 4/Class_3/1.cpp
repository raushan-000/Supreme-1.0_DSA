#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){

}
int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int target = 450;

    int ans = binarySearch(arr, target);
    cout << "index of "<< target << "is" << ans << endl;

    return 0;
}
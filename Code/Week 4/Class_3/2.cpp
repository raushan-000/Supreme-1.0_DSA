#include<iostream>
#include<vector>
using namespace std;

int solve(int dividend, int divisor){
    int s = 0;
    int e = (dividend);
    int ans = 0;
    int mid = s + (e-s)/2;

    
    while(s <=e){
        // perfect solution
        if((mid*divisor) == (dividend)){
            ans = mid;
            break;
            
        }
        // not perfect
        if((mid*divisor) > (dividend)){
            //left
            e = mid - 1;

        }
        else {
            // ans store
            ans = mid;
            // right search
            s = mid +1;
        }
        mid = s+(e-s)/2;
    }
    if((divisor<0 && dividend) || (divisor>0 && dividend>0))
    return ans;
    else{
        return -ans;
    }
}
int main(){
    int dividend = 35;
    int divisor = 5;

    int ans = solve(dividend,divisor);
    cout << "Ans is" << ans << endl;
    return 0;
}
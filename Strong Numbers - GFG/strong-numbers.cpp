// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  int fact(int n){
    if (n==0 || n==1)
        return 1;
        
    return n*fact(n-1);
        
  }
    int isStrong(int N) {
        // code here
        int k=N;
        int s=0;
        while(N>0){
            int rem=N%10;
            s+=fact(rem);
            N=N/10;
        }
        if (s==k)
            return 1;
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
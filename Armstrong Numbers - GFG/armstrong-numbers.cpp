// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int l=0;//n.length();
        int k=n;
        while(k>0){
            l++;
            k/=10;
        }
        // cout<<l;
        int s=0;
        int k1=n;
                // cout<<k<<" "<<s;

        while(k1>0){
            int rem=k1%10;
            s+=pow(rem, l);
            k1=k1/10;
        }
        // cout<<k1<<" "<<s;
        if(n==s)
            return "Yes";
        return "No";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
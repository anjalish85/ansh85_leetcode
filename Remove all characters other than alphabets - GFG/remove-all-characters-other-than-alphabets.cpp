// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        int S=s.size();
        int j=0;
        for(int i=0;i<S;i++){
            char ch=s[i];
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
                s[j]=s[i];
                j++;
            }
            // else{
            //     continue;
            // }
        }
        s.erase(j, S);
        if(j==0){
            return "-1";
        }
        return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.removeSpecialCharacter(s) << "\n";
    }

    return 0;
}  // } Driver Code Ends
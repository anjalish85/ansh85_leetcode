// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        int j=0;
        int S=s.size();
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch==' '){
                continue;
            }
            else{
                s[j++]=s[i];
            }
        }
        s.erase(j,S );
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
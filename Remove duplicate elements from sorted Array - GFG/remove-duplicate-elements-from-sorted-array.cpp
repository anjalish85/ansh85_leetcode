// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        
        if (n == 0 || n == 1)
            return n;
        
        int arr[n];
        int j=0;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                arr[j]=a[i];
                j++;
            }
        }
        arr[j++] = a[n - 1];

        for(int i=0;i<j;i++){
            a[i]=arr[i];
        }
        return j;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends
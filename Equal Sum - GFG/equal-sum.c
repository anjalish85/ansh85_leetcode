// { Driver Code Starts
// Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
// User function Template for C

char* equilibrium(int* arr, int n) {
    // code here
    int ls=0,s=0;
    
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    for(int i=0;i<n;i++){
        //acts as right sum
        //i is pivot point
        s-=arr[i];
        
        //i is pivot poit so it's not takem into account
        // and then checked for
        if(ls==s){
            return "YES";
        }
        
        // ls value is increased for next pivot
        ls+=arr[i];
    
    }
    return "NO";
    
}


// { Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, i;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        char *ans;
        ans = equilibrium(a, n);
        printf("%s \n", ans);
    }
    return 0;
}  // } Driver Code Ends
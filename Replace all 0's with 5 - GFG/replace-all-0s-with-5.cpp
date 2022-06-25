// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

 // } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    
    int convertFive(int n)
    {
    //Your code here
    if (n == 0)
        return 0;
    //https://media.geeksforgeeks.org/img-practice/play-1596780125.svg
    int d=n%10;
    if(d==0){
        d=5;
    }
    return (convertFive(n/10)*10) + d;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}  // } Driver Code Ends
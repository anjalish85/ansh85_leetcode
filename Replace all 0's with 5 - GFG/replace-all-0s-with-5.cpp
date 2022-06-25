// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

 // } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int rev(int n){
        int num=0;
        while (n>0){
        int rem = n%10;
        num= num*10 +rem;
        n=n/10;
    }
    return num;
    }
    int convertFive(int n)
    {
    //Your code here
    int num=0;
    while (n>0){
        int rem = n%10;
        if(rem==0){
            rem=5;
        }
        num= num*10 +rem;
        n=n/10;
    }
    return rev(num);//https://media.geeksforgeeks.org/img-practice/play-1596780125.svg
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
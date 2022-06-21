// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	int s=0;
    	string sd="";
    	// Your code here
    	for(int i=0;i<str.size();i++){
    	    char ch=str[i];
    	    if(ch>='0' && ch<='9'){
    	        sd+=ch;
    	    }
    	    else{
    	        s+=atoi(sd.c_str());
    	        sd="";
    	    }
    	}
    	
    	return s + atoi(sd.c_str());
    	
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeVowels(string S) 
	{
	   // // Your code goes here
	    int j=0;
	    int s=S.size();
	    for(int i=0;i<S.size();i++){
	        char ch=S[i];
	        ch=tolower(ch);
	        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
	            continue;
	        }
	        else{
	            S[j++]=S[i];
	        }
	    }
	   // S=S.replaceAll("[aeiouAEIOU]", “”);
        
        S.erase(j,s);

	    return S;
	}
};

// { Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends
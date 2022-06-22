// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}



// } Driver Code Ends


string sort(string s){
    //complete the function here
    int arr[26]={0};
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    string sr="";
    for(int i=0;i<26;i++){
        for(int j=0;j<arr[i];j++){
            cout<<char(i+'a');
        }
    }
    
    // int charCount[26] = {0};
      
    // // Traverse string and increment 
    // // count of characters
    // for (int i=0; i<s.length(); i++)
  
    //     // 'a'-'a' will be 0, 'b'-'a' will be 1,
    //     // so for location of character in count 
    //     // array we will do str[i]-'a'.
    //     charCount[s[i]-'a']++;    
      
    // // Traverse the hash array and print 
    // // characters
    // for (int i=0;i<26;i++)
    //     for (int j=0;j<charCount[i];j++)
    //         cout << (char)('a'+i);
}
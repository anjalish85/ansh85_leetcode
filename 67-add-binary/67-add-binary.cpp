class Solution {
public:
    string addBinary(string a, string b) {
         int size1=a.size()-1,size2=b.size()-1;
        string str="";
        int carry=0;
        while(size1>=0 || size2>=0 || carry>0){
            int sum=((size1<0)?0:(a[size1--]-'0'))+((size2<0)?0:(b[size2--]-'0'))+carry;
            carry=sum/2;
            str+='0'+(sum%2);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};














// long int s1=0,s2=0;
//          long int m=0,n=0;
//         string v2;
//         if(a=="0" && b=="0"){
//             return "0";
//         }
//         for(int i=a.length()-1;i>=0;i--){
//             cout<<a[i]<<" ";
//             s1+=(a[i]-48)*pow(2,m);m++;
//         }
//         cout<<endl<<s1<<endl;
//         for(int i=b.length()-1;i>=0;i--){
//             cout<<b[i]<<" ";
//             s2+=(b[i]-48)*pow(2,n);n++;
//         }
//         cout<<endl<<s2<<endl;        
//         int s=s1+s2;
        
//         cout<<s;
        
//         while(s>0){
//             v2.append(to_string(s%2));
//             s=s/2;
//         }
//         reverse(v2.begin(),v2.end());

//         return v2;
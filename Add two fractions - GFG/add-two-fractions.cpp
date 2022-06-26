// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}
// } Driver Code Ends


/*You are required to complete this function*/
int gcd(int n1, int n2){
    int r=min(n1, n2);
    while(r>0){
        if(n1%r==0 && n2%r==0)
            break;
        r--;
    }
    return r;
}
int lcm(int n1, int n2){
    
    return (n1*n2)/gcd(n1, n2);
}
void addFraction(int num1, int den1, int num2,int den2)
{
//Your code here
int den3=lcm(den1, den2);
int num3=(den3/den1)*num1 + (den3/den2)*num2;
int cf=gcd(num3, den3);
cout<< num3/cf<<"/"<<den3/cf<<endl;
 }
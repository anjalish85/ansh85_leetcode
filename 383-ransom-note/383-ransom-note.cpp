class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r=ransomNote.size();
        int m=magazine.size();
        int a[26]={0};
        for(int i=0;i<m;i++){
            a[magazine[i]-'a']+=1;
        }
     
        for(int i=0;i<r;i++){
            if(a[ransomNote[i]-'a']==0)
                return 0;
            else
                a[ransomNote[i]-'a']-=1;
        }
        
        return 1;
    }
};
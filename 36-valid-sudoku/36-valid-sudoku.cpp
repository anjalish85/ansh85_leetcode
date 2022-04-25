class Solution {
public:
    //using hashset
    bool isValidSudoku(vector<vector<char>>& board) {
        // unordered_set <int> s;//new unordered_set();
           unordered_set<string> s;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    //row checking
                    if(count(s.begin(),s.end(),"row"+to_string(i)+to_string(board[i][j])))
                        return 0;
                    //agr mila toh thik nhi toh else part m jkkr add ho jyga
                    //column checking
                    else if(count(s.begin(),s.end(),"column"+to_string(j)+to_string(board[i][j])))
                        return 0;
                    //in box checking
                    else if(count(s.begin(),s.end(),"box"+to_string((i/3)*3+j/3)+to_string(board[i][j])))
                        return 0;
                        
                        // || (count(s.begin(),s.end(),"column"+"j"+"board[i][j]")) ||  (count(s.begin(),s.end(),"box"+"(i/3)*3+j/3"+"board[i][j]")))
                    // {return 0;}
                    
                    else{
                        s.insert("row"+to_string(i)+to_string(board[i][j]));
                        s.insert("column"+to_string(j)+to_string(board[i][j]));
                        s.insert("box"+to_string((i/3)*3+j/3)+to_string(board[i][j]));
                    }
                
                }
                
            }
        }
        
        return 1;
        
    }
};

// if((!s.insert("box"+"(i/3)*3+j/3"+"board[i][j]")))
                    //     return 0;
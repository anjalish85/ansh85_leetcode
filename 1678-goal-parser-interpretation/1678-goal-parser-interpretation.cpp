class Solution {
public:
    string interpret(string command) {
        string answer;
        for(int i = 0; i < command.size();i++)
      switch(command[i]){
        case 'G': answer.push_back('G');break;
        case '(':
          if(command[++i] == ')') answer.push_back('o');
          else {answer += "al"; i += 2;}
      }
    
    return answer;
    }
};
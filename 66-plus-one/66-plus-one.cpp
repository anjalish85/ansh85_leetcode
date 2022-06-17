class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n = digits.size() - 1;
      
      for (int i = n; i >= 0; --i) { 
          //case for successive 9
        if (digits[i] == 9) {  
          digits[i] = 0;
            //normal case
        } else {  
          digits[i] += 1;
          return digits;
        }
      }
    //givib=ving the finishing for 9999 cases
    digits.push_back(0);
    digits[0]=1;
    return digits;
    }
};
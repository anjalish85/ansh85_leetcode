// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         stack<int>s; 
//         auto p=prices;
//         vector<int> v;
        
//          for(int i=p.size()-1;i>0;i--){
//              if(s.size()==0){v.push_back(prices[i]);}
//              else if(s.size()>0 && s.top()>prices[i]){
//                  v.push_back(s.top());
//              }
//              else if(s.size()>0 && s.top()<prices[i]){
//                  // v.push_back(s.top());
//                  while(s.size()>0 && s.top()<=prices[i]){
//                      s.pop();
//                  }
//                  if(s.size()==0){v.push_back(prices[i]);}
//                  else{v.push_back(s.top());}
//              }
//              s.push(prices[i]);
//          }
//         for(int i=0;i<p.size();i++){
//             v[i]=v[i]-prices[i];
//         }
//         return *max_element(v.begin(),v.end());
//     }
// };



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur = 0, ans = 0, n = prices.size();
        for (int i = 1; i < n; i++) {
            cur += prices[i] - prices[i - 1];
            cur = max(cur, 0);
            ans = max(ans, cur);
        }
        return ans;
    }
};
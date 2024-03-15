#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
      vector<int> past(n, 1);
      vector<int> next(n, 1);
        
        for (int i = 1; i < n; ++i) {
            past[i] = past[i - 1] * nums[i - 1];
        }
        
        for (int i = n - 2; i >= 0; --i) {
            next[i] = next[i + 1] * nums[i + 1];
        }
        
        vector<int> answer(n);
        for (int i = 0; i < n; ++i) {
            answer[i] = past[i] * next[i];
        }
        
        return answer;
    }
};
int main(){
vector<int>arr={1,2,3,4};
  vector<int>ans=s.productExceptSelf(arr);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
  }
  
return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
       
        for(int i=0;i<n;i++){
            int curr=nums[i]; // x = current element
            
        // x>=1 && x<=n : to check if x is in range[1, n]
        // x != i+1 : skip if at index i correct element is present.
        // nums[x-1]!=x: skip if at index x-1 correct element is present
            while(curr>=1 && curr<=n && curr!=i+1 && nums[curr-1]!=curr){
                swap(nums[curr-1],nums[i]);
                curr=nums[i];
            }
        }
      
        for(int i=0;i<n;i++){
            if(nums[i] == i+1)continue;
                return i+1;       
        }
        
        return n+1;
    }
};
int main(){
vector<int>nums={1,2,3,5,0};
 cout<< s.firstMissingPositive(nums);<<" ";
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        int n=v.size();
        int ans=0;
        for(int i=0;i<n;i++) {
            int s=1;
            for(int j=i;j<n;j++) {
                s=s*v[j];
                if(s>=k)
                    break;
                ans++;
            }
        }
        return ans;
    }
};

int main(){
  vector<int>a={10,2,3,4};
  int k=100;
  Solution s;
  cout<<s.numSubarrayProductLessThanK(a,k);
  return 0;
}

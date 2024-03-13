#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotInteger(int n) {
        int sum = n * (n + 1) / 2;
        double a = sqrt(sum);

        if (a - ceil(a) == 0)
            return int(a);
        else
            return -1;
    }
};
int main(){
int n=8;
Solution s;
int ans=s.pivotInteger(n);
cout<<ans;

return 0;
}

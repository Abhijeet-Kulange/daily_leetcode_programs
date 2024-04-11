// 402. Remove K Digits
// Solved
// Medium
// Topics
// Companies
// Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.

// Example 1:
// Input: num = "1432219", k = 3
// Output: "1219"
// Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
// Example 2:

// Input: num = "10200", k = 1
// Output: "200"
// Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
// Example 3:

// Input: num = "10", k = 2
// Output: "0"
// Explanation: Remove all the digits from the number and it is left with nothing which is 0.
 

// Constraints:

// 1 <= k <= num.length <= 105
// num consists of only digits.
// num does not have any leading zeros except for the zero itself.

#include<bits/stdc++.h>
using namespace std;


// class Solution {
// public:
//     string removeKdigits(std::string num, int k) {
//         stack<char> stack;
//         for (char digit : num) {
//             while (!stack.empty() && k > 0 && stack.top() > digit) {
//                 stack.pop();
//                 k--;
//             }
//             stack.push(digit);
//         }
        
//         while (k > 0 && !stack.empty()) {
//             stack.pop();
//             k--;
//         }
        
//         string result;
//         while (!stack.empty()) {
//             result += stack.top();
//             stack.pop();
//         }
//         reverse(result.begin(), result.end());
//         size_t pos = result.find_first_not_of('0');
//         result = (pos == string::npos) ? "0" : result.substr(pos);
        
//         return result;
//     }
// };

class Solution {
public:
    string removeKdigits(string num, int k) {
        string s="";
        for(char c:num){
            while(s.size() && s.back()>c && k)
            {
                k--;
                s.pop_back();
            }
            if(s.size()||c!='0') s.push_back(c);
        }
        while(s.size() && k--)
            s.pop_back();
        return (s.size()==0)?"0":s;
    }
};
int main(){
    int k;
    string num;
    Solution s;
    cout<<"Enter the string and number of iterations:- ";
    cin>>num>>k;
    string ans=s.removeKdigits(num,k);
    cout<<ans<<endl;
    
    return 0;

}

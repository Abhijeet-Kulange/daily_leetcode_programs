// Smallest String Starting From Leaf
// Solved
// Medium
// Topics
// Companies
// You are given the root of a binary tree where each node has a value in the range [0, 25] representing the letters 'a' to 'z'.
// Return the lexicographically smallest string that starts at a leaf of this tree and ends at the root.
// As a reminder, any shorter prefix of a string is lexicographically smaller.
// For example, "ab" is lexicographically smaller than "aba".
// A leaf of a node is a node that has no children.

// Example 1
// Input: root = [0,1,2,3,4,3,4]
// Output: "dba"
// Example 2:
// Input: root = [25,1,3,1,3,0,2]
// Output: "adz"
// Exmple 3:
// Input: root = [2,2,1,null,1,0,null,0]
// Otput: "abc"
// Constraints:
// The number of nodes in the tree is in the range [1, 8500].
// 0 <= Node.val <= 25

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string smallestfronleapnode(Treenode* root){
      string smallest;
      dfs(root,"",smallest);
      return smallest;
    }
  void dfs(Treenode* node,string path,string smallest){
    if(node==nullptr)return ;
    path=path+char('a'+node->val);
    if(node->left==nullptr && node->right==nulptr){
      reverse(path.begin(),path.end());
      if(smallest.empty() || path <smallest){
        smallest=path;
      }
      reverse(path.begin(),path.end());
    }
    dfs(node->left,path,smallest);
    dfs(node->right,path,smallest);
  }
};
int main(){
// tree is created
  Solution s;
  cout<<s.smallestfronleapnode(root);
  return 0;
}

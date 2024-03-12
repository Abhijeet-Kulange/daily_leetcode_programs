class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp = new ListNode(0);

        temp->next = head;
        unordered_map<int, ListNode*> prefixSumToNode;
        int preefixingsum = 0;
        for (ListNode* current = temp; current != nullptr; current = current->next) {
            preefixingsum += current->val;

            if (prefixSumToNode.count(preefixingsum)) {
                ListNode* prev = prefixSumToNode[preefixingsum];
                ListNode* toRemove = prev->next;

                int p = preefixingsum + (toRemove ? toRemove->val : 0);
                while (p != preefixingsum) {
                    prefixSumToNode.erase(p);
                    toRemove = toRemove->next;
                    p += (toRemove ? toRemove->val : 0);
                }
                prev->next = current->next;
            } else {
                prefixSumToNode[preefixingsum] = current;
            }
        }
        return temp->next;
    }
};

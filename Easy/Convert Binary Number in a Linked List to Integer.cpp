/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int>digits;
        while(head->next){
            digits.push_back(head->val);
            head = head->next;
        }
        digits.push_back(head->val);
        reverse(digits.begin(),digits.end());
        int result=0;
        int i=0;
        for(int d=0;d<digits.size();d++){
            result+=(digits[d]*pow(2,i++));
        }
        return result;
    }
};

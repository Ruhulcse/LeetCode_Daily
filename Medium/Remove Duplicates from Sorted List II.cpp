class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        bool flag = true;
        while(head){
            while(head&&head->next&&head->val==head->next->val){
                flag = false;
                head = head->next;
            }
            if(flag){
                tail->next = head;
                tail = tail->next;
            }
            flag = true;
            head = head->next;
        }
        tail->next = nullptr;
        return dummy->next;
    }
};

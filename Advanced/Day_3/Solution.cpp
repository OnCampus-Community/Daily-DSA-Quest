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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL){
            return head;
        }
        vector<int> res;
        ListNode* ptr = head;
        while(ptr != NULL){
            res.push_back(ptr->val);
            ptr = ptr->next;
        }
        ptr = head;
        for(int i=0; i<res.size(); i+=2){
            ptr->val = res[i];
            ptr = ptr->next;
        }
        for(int i=1; i<res.size(); i+=2){
            ptr->val = res[i];
            ptr = ptr->next;
        }
        return head;
    }
};
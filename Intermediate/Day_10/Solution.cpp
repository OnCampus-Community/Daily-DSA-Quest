 #include<bits/stdc++.h>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        else{
            vector<int> res;
            ListNode* temp = head;
            while(temp!=NULL){
                res.push_back(temp->val);
                temp = temp->next;
            }
            temp = head;
            int i = 0;
            reverse(res.begin(), res.end());
            while(temp!=NULL){
                temp->val = res[i];
                i++;
            }
            return head;
        }
    }
};
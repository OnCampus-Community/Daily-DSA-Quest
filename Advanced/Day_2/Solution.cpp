/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here
        vector<int> nums1;
        vector<int> nums2;
        Node* temp = num1;
  //   Put the numbers represented in linked list in vectors
        while(temp != NULL){
            nums1.push_back(temp->data); 
            temp = temp->next;
        }
        temp = num2;
        while(temp != NULL){
            nums2.push_back(temp->data);
            temp = temp->next;
        }
        int carry = 0;
        int i=0; 
        int j=0;
  //  Create a sum vector in which adding the numbers in same indexes and carry digit and continue
        vector<int> res;
        int x = 0;
        while(i<nums1.size() && j<nums2.size()){
            x = nums1[i]+nums2[j]+carry;
            i++;
            j++;
            res.push_back(x%10);
            carry = x/10;
        }

  //  Add the remaining left numbers or the carry digits
        while(i<nums1.size()){
            x = nums1[i]+carry;
            i++;
            res.push_back(x%10);
            carry = x/10;
        }
        while(j < nums2.size()){
            x = nums2[j]+carry;
            j++;
            res.push_back(x%10);
            carry = x/10;
        }
        while(carry!=0){
            res.push_back(carry%10);
            carry = carry/10;
        }
  //  Now represent the sum vector in LinkedList
        Node * head = new Node(0);
        temp = head;
        // reverse(res.begin(), res.end());
        for(int i=0; i<res.size(); i++){
            temp -> next = new Node(res[i]);
            temp = temp->next;
        }
        return head->next;
}
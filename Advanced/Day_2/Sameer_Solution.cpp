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
  // Write your code here.
  Node *temp1 = num1;
  Node *temp2 = num2;
  Node *result = new Node(-1);
  Node *current = result;
  int carry = 0;
  while (temp1 != nullptr || temp2 != nullptr){
    int sum = carry;
    if (temp1){
      sum += temp1->data;
    }
    if (temp2){
      sum += temp2->data;
    }
    Node *newNode = new Node(sum % 10);
    carry = sum / 10;
    current->next = newNode;
    current = current->next;
    if (temp1){
      temp1 = temp1->next;
    }
    if (temp2){
      temp2 = temp2->next;
    }
  }
  if (carry == 1){
    Node *newNode = new Node(carry);
    current->next = newNode;
  }
  return result->next;
}

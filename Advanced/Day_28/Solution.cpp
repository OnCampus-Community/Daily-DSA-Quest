/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    vector<pair<int, int>> res;
    Node* ptr = head;
    unordered_map<int, int> hashh;
    while(ptr != NULL){
        int x = ptr->data;
        if(hashh[k-x] > 0){
            res.push_back({k-x, x});
        }
        hashh[x]++;
        ptr = ptr->next;
    }
    return res;
}
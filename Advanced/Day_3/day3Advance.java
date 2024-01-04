class Solution {
    public ListNode oddEvenList(ListNode head) {
        int idx=1;

        ListNode currNode=new ListNode(-1);
        ListNode cueeNode=new ListNode(-1);

        ListNode tailO=currNode;
        ListNode tailE=cueeNode;

        ListNode nodeSt=head;

        while(nodeSt!=null){
            ListNode n=new ListNode(nodeSt.val);
            if(idx%2!=0){
                tailO.next=n;
                tailO=n;
            }
            else{
                tailE.next=n;
                tailE=n;
            }
            idx++;
            nodeSt=nodeSt.next;
        }
        tailO.next=cueeNode.next;
        return currNode.next;
    }
}

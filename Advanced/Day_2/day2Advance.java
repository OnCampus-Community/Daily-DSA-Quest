import java.util.*;
import java.io.*;
public class Solution {
    static LinkedListNode addTwoNumbers(LinkedListNode head1, LinkedListNode head2) {
        // Write your code here.
        LinkedListNode temp1 = head1;
        LinkedListNode temp2 = head2;
        LinkedListNode dummyhead = new LinkedListNode(-1);
        LinkedListNode curr = dummyhead;

        int carry = 0;
        int sum = 0;
        while (temp1 != null || temp2 != null) {
            sum = carry;
            if (temp1 != null) {
                sum = sum + temp1.data;
            }
            if (temp2 != null) {
                sum = sum + temp2.data;
            }
            LinkedListNode newNode = new LinkedListNode(sum % 10);
            carry = sum / 10;
            curr.next = newNode;
            curr = curr.next;
            if (temp1 != null) {
                temp1 = temp1.next;
            }
            if (temp2 != null) {
                temp2 = temp2.next;
            }
        }
        if (carry == 1) {
            LinkedListNode newNode = new LinkedListNode(carry);
            curr.next = newNode;
        }
        return dummyhead.next;
    }
}

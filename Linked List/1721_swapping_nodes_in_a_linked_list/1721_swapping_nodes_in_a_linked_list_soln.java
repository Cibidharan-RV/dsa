/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        ListNode 
            dummy = new ListNode(0, head),
            dummy2 = dummy,
            count = dummy
        ;
        int n = 0;

        for (int i=0; i<k; ++i) {
            dummy = dummy.next;
        }
        count = dummy;
        while (count != null) {
            count = count.next;
            dummy2 = dummy2.next;
        }

            // swap dummy2.next with dummy.next
        int dummy2val = dummy2.val;
        dummy2.val = dummy.val;
        dummy.val = dummy2val;
        return head;
    }
}
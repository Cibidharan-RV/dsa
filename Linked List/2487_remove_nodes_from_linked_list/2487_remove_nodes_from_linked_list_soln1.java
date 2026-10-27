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
    public ListNode removeNodes(ListNode head) {
        ListNode 
            prev = new ListNode(0, null),
            cur = head;
        ;
        while (cur != null) {
            ListNode next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }
        cur = prev;
        prev =null;
        int max = cur.val;
        while (cur != null) {
            ListNode next = cur.next;
            if (cur.val >= max) {
                max = cur.val;
                cur.next = prev;
                prev = cur;

            }
            cur = next;
        }

        return prev;
    }
}
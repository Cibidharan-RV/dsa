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
        int max = cur.val;
        while (cur != null && cur.next != null) {
            if (cur.next.val < max) {
                cur.next = cur.next.next;
            } else {
                max = cur.next.val;
                cur = cur.next;
            }
        }
        cur = prev;
        prev = null;
        while (cur != null) {
            ListNode next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }

        return prev;
    }
}
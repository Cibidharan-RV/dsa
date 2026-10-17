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
    public ListNode insertionSortList(ListNode head) {
        ListNode
            dummy = new ListNode(Integer.MIN_VALUE, head),
            dum = head,
            cur = head.next,
            now = cur,
            prev = head
        ;

        while (cur != null) {
            if (cur.val > prev.val) {
                cur = cur.next;
                prev = prev.next;
            } else {
                dum = dummy;
                while (dum.next.val < cur.val) {
                    dum = dum.next;
                }
                prev.next = cur.next;  
                cur.next = dum.next;
                dum.next = cur;
                cur = prev.next;
            }
        }
        return dummy.next;
    }
}
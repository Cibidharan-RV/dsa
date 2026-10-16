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
    public ListNode partition(ListNode head, int x) {
        ListNode 
            cur = head,
            small = new ListNode(),
            s = small,
            big = new ListNode(),
            b = big
        ;
        while (cur != null) {
            if (cur.val < x) {
                s.next = cur;
                s = s.next;
            }
            else {
                b.next = cur;
                b = b.next;
            }
            cur = cur.next;
        }
        s.next = big.next;
        b.next = null;
        return small.next;
    }
}
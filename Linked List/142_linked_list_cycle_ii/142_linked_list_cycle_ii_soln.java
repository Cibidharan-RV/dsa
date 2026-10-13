/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode
            fast = head,
            slow = head
        ;
        int m = 0,  // dist to meetpoint
            c = 0;  // len of loop
        while (fast != null && fast.next != null) {            
            fast = fast.next.next;
            slow = slow.next;
            m += 2;
            if (fast == slow) {
                while (fast != head) {
                    fast = fast.next;
                    head = head.next;
                }
                return fast;
            }
        }
        return null;
    }
}
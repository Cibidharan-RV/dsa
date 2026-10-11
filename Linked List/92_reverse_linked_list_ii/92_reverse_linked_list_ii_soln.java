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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        ListNode dummy = new ListNode();
        dummy.next = head;
        ListNode curr = head;
        ListNode next = head;
        ListNode start = dummy;
        ListNode end = dummy;
        ListNode prev = null;
        int count = right - left + 1;
        for (int i = 1; i < left; i++) {
            start = start.next;
        }

        curr = start.next;
        prev = null;
        end = curr;

        while (count > 0) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
            count--;
        }

        start.next = prev;
        end.next = curr;

        return dummy.next;
    }
}
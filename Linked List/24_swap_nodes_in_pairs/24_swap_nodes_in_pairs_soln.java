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


 // 1 2 3 4 5 6 7 8 9 0
 //   2 1 4 3 6 5 8 7 0 9

class Solution {
    static ListNode next_swap;
    static ListNode curr_swap;
    static ListNode next;

    public ListNode swapPairs(ListNode head) {
        curr_swap = head;
        next_swap = head;
        

        if (head == null) return head;
        else if (head.next != null) head = head.next;
        else return head;

        ListNode newHead = head;

        while (head != null && head.next != null) {

            next = head.next.next;
            next_swap = head.next;
            head.next = curr_swap;
            head.next.next = next;
            if (next == null) {
                head.next.next = next_swap;
                next_swap.next = null;
            }

            head = next;
            curr_swap = next_swap;
        }
        if (head != null) {
            head.next = curr_swap;
            curr_swap.next = null;
        }
        return newHead;
    }
}
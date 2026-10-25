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
    public ListNode mergeNodes(ListNode head) {
        ListNode
            ans = head,
            ansHead = head
        ;

        while (head != null && head.next != null) {
            if (head.val == 0) {
                ListNode next = head.next;
                ans.next = head;
                ans = head;
                head = next;
            }
            while (head != null && head.val != 0) {
            // else {
                ans.val += head.val;
                head = head.next;
            }
        }
        ans.next = null;
        return ansHead;
    }
}
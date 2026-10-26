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
    public void display(String m) {
        System.out.println(m);
    }
    public ListNode doubleIt(ListNode head) { 
        ListNode cur = head;
        if (head.val >= 5) {
            head.val -= 5;
            head = new ListNode(1, head);
        }
        
        while (cur != null) {
            if (cur.next != null && cur.next.val >= 5) {
                cur.next.val -= 5;
                cur.val = cur.val * 2 + 1;
            }
            else {
                cur.val = cur.val * 2;
            }
            cur = cur.next;
        }
        return head;
    }
}
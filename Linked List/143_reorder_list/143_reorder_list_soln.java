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

 // 0 1 2 3 4 5 6 7 8 9
 // 0 9 1 8 2 7 3 6 4 5
class Solution {
    static ListNode front;
    static boolean stop;

    public void reorderList(ListNode head) {
        front = head;
        stop = false;
        reorder(head);    
    }
    static void reorder(ListNode back){
        if (back == null) return;
        reorder(back.next);
        if (stop) return;

        if (back == front || front.next == back) {
            back.next = null;
            stop = true;
            return;
        }
        ListNode temp = front.next;
        front.next = back;
        back.next = temp;
        front = temp;
    }
}
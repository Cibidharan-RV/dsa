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
    public static int add(ListNode l1, ListNode l2) {
        if (l1 == null && l2 == null) {
            return 0;
        }
        int value = l1.val + l2.val + add(l1.next, l2.next);
        System.out.println(l1.val + " " + l2.val);
        l1.val = (value) % 10;
        return (value) / 10;
    }
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode 
            d1 = l1,
            d2 = l2,
            ls1 = l1,
            ls2 = (l2)
        ;
        while (d1 != null && d2 != null) {
            d1 = d1.next;
            d2 = d2.next;
        }
        if (d1 == null && d2 != null) {
            d1 = d2;
            d2 = null;
            ls1 = l2;
            l2 = l1;
            l1 = ls1;
            ls2 = l2;
        }
        while (d1 != null) {
            ls2 = new ListNode(0, ls2);
            d1 = d1.next;
        }        
        int carry = add(ls1, ls2);
        if (carry != 0) {
            ls1 = new ListNode(carry, ls1);
        }
        return ls1;
    }
}
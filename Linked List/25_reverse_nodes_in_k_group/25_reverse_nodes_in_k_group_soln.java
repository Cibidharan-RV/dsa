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
 //  0 1 2 3 4 5 6 7 8 9 
 //  9 6 7 8 3 4 5 0 1 2
 //  2 1 0 5 4 3 8 7 6 9 
class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        
        ListNode groupEnd = head;
        ListNode groupStart = head;
        ListNode nextGroupStart = null;
        ListNode prevGroupStart = null;
        
        for (int i = 1; i < k; ++i) {
            groupEnd = groupEnd.next;
        }
        
        while (groupEnd != null) {
            nextGroupStart = groupEnd.next;
            groupEnd.next = prevGroupStart;
            groupEnd = nextGroupStart;
            prevGroupStart = groupStart;
            groupStart = nextGroupStart;
            
            for (int i = 1; i < k && groupEnd != null; ++i) {
                groupEnd = groupEnd.next;
            }
        }
        
        groupEnd = nextGroupStart; 
        groupStart = (prevGroupStart != null) ? prevGroupStart : head;
        
        while (groupStart != null) {
            ListNode nextNode = groupStart.next;
            groupStart.next = groupEnd;
            groupEnd = groupStart;
            groupStart = nextNode;
        }
        
        return groupEnd;
    }
}
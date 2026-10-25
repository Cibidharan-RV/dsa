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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode 
            head = list1,
            start = list2,
            end
        ;
        if (list2 == null) return list1;
        
        while (list2.next != null) {
            list2 = list2.next;
        }
        
        end = list2;
        int i=1;
        while (list1 != null) { 
            if (i == a) {
                ListNode next = list1.next;
                list1.next = start;
                list1 = next;
            } 
            else if (i == b+1) {
                end.next = list1.next;
                break;                
            }
            else {
                list1 = list1.next;
            }
            ++i;
        }
        return head;
    }
}
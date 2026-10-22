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
    HashSet<Integer> set = new HashSet<>();
    public int numComponents(ListNode head, int[] nums) {
        for (int n : nums) {
            set.add(n);
        }
        int count = 0;
        while (head != null) {
            // if (head != null) System.out.print(head.val + " start loop");
            // System.out.print("\ncomponents : ");
            if (set.contains(head.val)) count++;
            while (head != null && set.contains(head.val)) {
                // System.out.print(head.val + " -> ");
                head = head.next;
            }
            // System.out.print("\nSkipping : ");
            while (head != null && !set.contains(head.val)) {
                // System.out.print(head.val + " -> ");
                head = head.next;
            }
            // if (head != null) System.out.print("\n" + head.val+ " end loop");
            if (head == null) return count;
        }
        return count;
    }
}
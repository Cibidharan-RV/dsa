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
        boolean in = false;
        int count = 0;
        while (head != null) {
            if (set.contains(head.val) && !in) {
                in = true;
                ++count;
            } else if (!set.contains(head.val) && in) {
                in = false;
            }
            head = head.next;
        }
        return count;
    }
}
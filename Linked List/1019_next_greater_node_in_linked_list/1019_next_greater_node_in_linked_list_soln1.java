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
    public int[] nextLargerNodes(ListNode head) {
        ListNode
            cur = head
        ;
        List<Integer> list = new ArrayList<>();
        Deque<Integer> stack = new ArrayDeque<>();
        while (cur != null) {
            list.add(cur.val);
            cur = cur.next;
        }
        cur = head;
        int[] arr = new int[list.size()];
        int i = 0;
        while (cur != null) {
            while (
                !stack.isEmpty() && 
                list.get(stack.peek()) < cur.val
            ) {
                if (arr[stack.peek()] == 0) {
                    arr[stack.peek()] = cur.val;
                    stack.pop();
                }
            }
            stack.push(i);
            cur = cur.next;
            i++;
        }
        return arr;
    }
}
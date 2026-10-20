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

        for (int i=0; i<list.size(); ++i) {
            while (
                !stack.isEmpty() && 
                list.get(stack.peek()) < list.get(i)
            ) {
                if (arr[stack.peek()] == 0) {
                    arr[stack.peek()] = list.get(i);
                    stack.pop();
                }
            }
            stack.push(i);
        }
        return arr;
    }
}
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode 
            preHead = new ListNode(0, head),
            curr = preHead
        ;
        while (curr != null && curr.next != null) {
            if (curr.next.val == val)
                curr.next = curr.next.next;
            else
                curr = curr.next;
        }
        return preHead.next;
    }
}
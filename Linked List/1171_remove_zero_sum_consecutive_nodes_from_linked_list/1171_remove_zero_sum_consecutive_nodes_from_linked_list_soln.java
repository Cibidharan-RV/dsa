class Solution {
    static HashMap<Integer, ListNode> map;
    public ListNode removeZeroSumSublists(ListNode head) {
        map = new HashMap<>();
        ListNode
            dummy = new ListNode(0, head),
            cur = head
        ;
        int ps = 0;
        map.put(0, dummy);
        while (cur != null) {
            ps += cur.val;
            map.put(ps, cur);
            cur = cur.next;
        }
        ps = 0;
        cur = dummy;
        while (cur != null) {
            ps += cur.val;
            cur.next = map.get(ps).next;
            cur = cur.next;
        }
        return dummy.next;
    }
}
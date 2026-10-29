class Solution {
    static HashSet<Integer> list;
    public ListNode modifiedList(int[] nums, ListNode head) {
        list = new HashSet<>();

        for (int n : nums) {
            list.add(n);
        }
        ListNode 
            dummy = new ListNode(0, head),
            cur = head, 
            prev = dummy
        ;
        while (cur != null) {
            if (list.contains(cur.val)) {
                prev.next = cur.next;
                cur = cur.next;
            } else {
                prev = prev.next;
                cur = prev.next;
            }
        }
        return dummy.next;
    }
}
class Solution {
    public ListNode oddEvenList(ListNode head) {
        if (head == null || head.next == null || head.next.next == null) return head;
        ListNode 
            odd = head,
            even = head,
            oddEnd = null,
            eveEnd = null;
        ;
        while (even != null && even.next != null && even.next.next != null) {
            even= even.next.next;
        }
        if (even != null && even.next != null) eveEnd= even.next;
        oddEnd = even;
        while (odd != oddEnd && odd.next != oddEnd) {
            even.next = odd.next;
            odd.next = odd.next.next;
            even = even.next;
            odd = odd.next;
        }
        even.next = eveEnd;
        return head;
    }
}
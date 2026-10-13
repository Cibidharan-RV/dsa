public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode
            endA = headA,
            endB = headB
        ;
        int a=0, b=0;

        while (endA != null && endB != null) {
            if (endA == endB) return endA;
            endA = endA.next;
            endB = endB.next;
            a+=1;
        }
        b = a;
        while (endA != null) {
            endA = endA.next;
            a += 1;
        }
        while (endB != null) {
            endB = endB.next;
            b += 1;
        }
        if (a > b) {
            ListNode temp = headA;
            headA = headB;
            headB = temp;
            a ^= b;
            b ^= a;
            a ^= b;
        }
        for (int i=a; i<b; ++i) {
            headB = headB.next;
        }
        while (headA != null) {
            if (headA == headB) return headA;
            headA = headA.next;
            headB = headB.next;
        }
        return null;
    }
}
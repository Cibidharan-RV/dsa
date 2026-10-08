/*
// Definition for a Node.
class Node {
    public int val;
    public Node prev;
    public Node next;
    public Node child;
};
*/

class Solution {
    static Node temp;
    static Node cur;
    public Node flatten(Node head) {
        
        func(head);
        return head;
    }
    public static void func(Node head) {
        if (head == null) return;
        if (head.child != null) {
            cur = head;
            temp = head.next;
            head.next = head.child;
            head.next.prev = head;
            head.child = null;
            while (head.next != null) {
                head = head.next;
            }
            head.next = temp;
            if (temp != null) temp.prev = head;
            func(cur.next);
        }
        func(head.next);
    }
}
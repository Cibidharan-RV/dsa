/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        if (head == null) {
            return null;
        }

        HashMap<Node, Node> clone = new HashMap<>();
        Node cur = head.next;
        Node nhead = new Node(head.val);
        clone.put(head, nhead);
        Node ncur = nhead;
        
        while (cur != null) {
            Node temp = new Node(cur.val);
            ncur.next = temp;
            clone.put(cur, ncur.next);
            cur = cur.next;
            ncur = ncur.next;
        }

        ncur = nhead;
        cur = head;
        while (ncur != null) {
            ncur.random = clone.get(cur.random);
            ncur = ncur.next;
            cur = cur.next;
        }
        return nhead;
    }
}
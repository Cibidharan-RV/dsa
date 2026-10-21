public class MyLinkedList {

    private class Node {
        int val;
        Node prev;
        Node next;
        
        Node(int val) {
            this.val = val;
        }

        Node(int val, Node prev, Node next) {
            this.val = val;
            this.prev = prev;
            this.next = next;
        }
    }

    private Node head;
    private Node tail;
    private int len;

    public MyLinkedList() {
        head = new Node(0);
        tail = new Node(0, head, null);
        head.next = tail;
        len = 0;
    }
    
    private Node getNode(int index) {
        if (index >= len) return null;
        
        if (index * 2 >= len) {
            int stepsFromTail = len - 1 - index;
            Node temp = tail.prev;
            for (int i = 0; i < stepsFromTail; i++) {
                temp = temp.prev;
            }
            return temp;
        } else {
            Node temp = head.next;
            for (int i = 0; i < index; i++) {
                temp = temp.next;
            }
            return temp;
        }
    }
    
    public int get(int index) {
        Node target = getNode(index);
        return target == null ? -1 : target.val;
    }
    
    public void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    public void addAtTail(int val) {
        addAtIndex(len, val);
    }
    
    public void addAtIndex(int index, int val) {
        if (index > len) return;
        
        Node succ;
        if (index == len) {
            succ = tail;
        } else {
            succ = getNode(index);
        }
        
        Node pred = succ.prev;
        
        pred.next = new Node(val, pred, succ);
        succ.prev = pred.next;
        
        len++;
    }
    
    public void deleteAtIndex(int index) {
        if (index >= len) return;
        
        Node target = getNode(index);
        Node pred = target.prev;
        Node succ = target.next;
        
        pred.next = succ;
        succ.prev = pred;
        
        len--;
    }
}
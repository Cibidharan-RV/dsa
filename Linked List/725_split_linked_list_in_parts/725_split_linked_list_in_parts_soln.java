class Solution {
    public ListNode[] splitListToParts(ListNode head, int k) {
        if (head == null || head.next == null) {
            ListNode[] h = new ListNode[k];
            h[0] = head;
            return h;
        }

        int len = 0;
        ListNode 
            l = head,
            headI = head, 
            endI, 
            nextI = head
        ;

        while (l != null) {
            len++;
            l = l.next;
        }

        int 
            seg = len / k,
            lar = len % k
        ;

        ListNode[] arr = new ListNode[k];

        for (int i = 0; i < k; ++i) {
            if (nextI == null) {
                return arr;
            }

            headI = nextI;
            endI = headI;

            int partSize = seg + ((i < lar) ? 1 : 0);

            for (int j = 1; j < partSize; ++j) {
                if (endI == null) {
                    break;
                }

                endI = endI.next;

                if (endI == null) {
                    break;
                }
            }

            if (endI == null) {
                return arr;
            }

            nextI = endI.next;
            endI.next = null;
            arr[i] = headI;
        }

        return arr;
    }
}
// 2. Add Two Numbers

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        size_t r=0, s;//, i=0; 
        s = l1->val + l2->val;
        struct ListNode* newNode = new ListNode(s%10);
        struct ListNode *ptr= newNode;
        r=s/10;
        struct ListNode *head = newNode;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 != NULL && l2 != NULL) {
            s = l1->val + l2->val + r;
            struct ListNode* N = new ListNode(s%10);
            ptr->next = N;
            ptr = N;
            r = s/10;
            l1 = l1->next;
            l2 = l2->next;
            //cout << i << " sum\n";
            //i++;
        }
        while (l1 != NULL) {
            struct ListNode* N = new ListNode((l1->val + r)%10);
            ptr->next = N;
            r = (l1->val + r)/10;
            ptr = N;
            l1 = l1->next;
            //cout << i << " l1 tail\n";
            //i++;
        }
        while (l2 != NULL) {
            struct ListNode* N = new ListNode((l2->val + r)%10);
            ptr->next = N;
            r = (l2->val + r)/10;
            ptr = N;
            l2 = l2->next;
            //cout << i << " l2 tail\n";
            //i++;
        }
        if (r != 0) {
            struct ListNode* N = new ListNode(r);
            ptr->next = N;
            //cout << i << " final remainder\n";
            //i++;
        }
        return head;
    }
    
};

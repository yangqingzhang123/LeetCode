class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *pNew = new ListNode(0);
        ListNode *p = pNew;
        int isDigit = 0;
        while (l1 != NULL || l2 != NULL || isDigit)
        {
            int val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + isDigit;
            isDigit = val / 10;
            val %= 10;
            ListNode *tmp = new ListNode(val);
            p->next = tmp;
            p = tmp;
            l1 = (l1 ? l1->next : l1);
            l2 = (l2 ? l2->next : l2);
        }
        ListNode *pHead = pNew->next;
        delete pNew;
        return pHead;
    }
};
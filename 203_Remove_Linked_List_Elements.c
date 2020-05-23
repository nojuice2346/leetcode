/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode helper;
    helper.next = head;
    struct ListNode *p = &helper;
    
    while(p->next != NULL)
    {
        if (p->next->val == val)
        {
            struct ListNode *list = p->next;
            p->next = list->next;
        }
        else
        {
            p = p->next;
        }
    }
    
    return helper.next;
}

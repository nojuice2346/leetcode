/**
 * Input: 1->2->3->4->5->NULL
 * Output: 1->3->5->2->4->NULL
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode *odd, *temp, *even;
    
    if (head == NULL)
        return head;
    else if (head->next == NULL)
        return head;
    
    odd = head;
    even = head->next;
    temp = even;

    while((even != NULL) && (even->next != NULL))
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even=even->next;
    }
    
    odd->next = temp;
    
    return head;
}

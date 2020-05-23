/**
 * Input: 1->2->3->4->5->NULL
 * Output: 5->4->3->2->1->NULL
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    struct ListNode *current = head;
    struct ListNode *next = head->next;
    struct ListNode *temp = current;

    current->next = NULL;
    
    do
    {
        temp = current;
        current=next;
        next=next->next;
        current->next = temp;
    } while(next != NULL);
    
    return current;
}

/**
 * Input: 1->1->2
 * `Output: 1->2
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* node = head;
    struct ListNode*prev;
    int tval = -1;

    while(node != NULL)
    {
        if(node->val == tval)
        {
            prev->next = node->next;
        }
        else
        {
            tval = node->val;
            prev = node;
        }

        node = node->next;
    }
    
    return head;
}

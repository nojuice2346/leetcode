/**
 * Input: head = [3,2,0,-4], pos = 1
 * Output: true
 * Explanation: There is a cycle in the linked list, where tail connects to the second node.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *nodeA;
    struct ListNode *nodeB;
    
    if ((head == NULL) || (head->next == NULL))
        return false;

    nodeA = head;
    nodeB = head->next;
    
    while (nodeA != nodeB)
    {
        if ((nodeA == NULL) || (nodeB == NULL) ||
            (nodeA->next == NULL) || (nodeB->next == NULL)||(nodeB->next->next == NULL))
            return false;
        
        nodeA = nodeA->next;
        nodeB = nodeB->next->next;
    }
    
    if (nodeA == nodeB)
        return true;
    
    return false;
}

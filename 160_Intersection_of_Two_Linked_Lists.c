/**
 * Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2, skipB = 3
 * Output: Reference of the node with value = 8
 * Input Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,0,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    int lenA=0;
    int lenB=0;
    int diff, i;
    struct ListNode* nodeA;
    struct ListNode* nodeB;
    
    nodeA = headA;
    nodeB = headB;
    while ((nodeA != NULL) || (nodeB != NULL))
    {
        if (nodeA != NULL)
        {
            lenA++;
            nodeA = nodeA->next;
        }
        if (nodeB != NULL)
        {
            lenB++;
            nodeB = nodeB->next;
        }
    }
    
    nodeA = headA;
    nodeB = headB;
    if (lenA > lenB)
    {
        diff = lenA-lenB;
        for (i=0;i<diff;i++)
        {
            nodeA = nodeA->next;
        }
        
    }
    else
    {
        diff = lenB-lenA;
        for (i=0;i<diff;i++)
        {
            nodeB = nodeB->next;
        }
    }
    
    while((nodeA != NULL) && (nodeB != NULL))
    {
        if (nodeA->val == nodeB->val)
            return nodeA;
        
        nodeA = nodeA->next;
        nodeB = nodeB->next;
    }
    
    return NULL;
}


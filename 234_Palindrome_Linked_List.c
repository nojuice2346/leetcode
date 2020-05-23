/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode* node = head;
    int count=0, i=0, max=0;
    int *arr;
    int even=false;
    
    if ((head == NULL)||(head->next == NULL))
        return true;
    
    while(node != NULL)
    {
        node=node->next;
        max++;
    }
    
    if ((max % 2) == 0)
    {
        even = true;
    }
    
    arr = (int *)malloc(sizeof(int) * (max/2));
    
    node = head;
    while(node != NULL)
    {
        if (count < (max/2))
        {
            arr[i] = node->val;
            i++;
        }
        else if ((count > (max/2)) ||
                 ((count == (max/2) && even))) 
        {
            i--;
            if(node->val != arr[i])
            {
                free(arr);
                return false;
            }
        }
        count++;
        node = node->next;
    }
    
    free(arr);
    return true;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *List1 = head, *List2 = head;

    while(List1 != NULL){
        if(n < 0){
            List2 = List2->next;
        }
        List1 = List1->next;
        n--;
    }

    if(n == 0){
        return head->next;
    }
    List2->next = List2->next->next;

    return head;
}
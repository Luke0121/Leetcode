/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *listHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    listHead->next = NULL;
    struct ListNode *pl1 = l1, *pl2 = l2, *plist = listHead;

    while((pl1 != NULL) && (pl2 != NULL))
    {
        if(pl1->val < pl2->val)
        {
            plist->next = pl1;
            pl1 = pl1->next;
        }
        else
        {
            plist->next = pl2;
            pl2 = pl2->next;
        }

        plist = plist->next;
        plist->next = NULL;
    }

    while(pl1 != NULL)
    {
        plist->next = pl1;
        pl1 = pl1->next;
        plist = plist->next;
        plist->next = NULL;
    }

    while(pl2 != NULL)
    {
        plist->next = pl2;
        pl2 = pl2->next;
        plist = plist->next;
        plist->next = NULL;
    }

    plist = listHead->next;
    free(listHead);
    return plist;
}
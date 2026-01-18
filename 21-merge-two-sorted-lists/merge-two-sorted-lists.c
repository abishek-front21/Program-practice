struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    // Dummy node to start the merged list
    struct ListNode dummy;
    dummy.next = NULL;

    // Pointer to build the new list
    struct ListNode* tail = &dummy;

    // Traverse both lists
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // Attach remaining nodes
    if (list1 != NULL)
        tail->next = list1;
    else
        tail->next = list2;

    // Head of merged list
    return dummy.next;
}

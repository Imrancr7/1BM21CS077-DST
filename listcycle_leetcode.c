bool hasCycle(struct ListNode *head) {
    struct ListNode *b=head;
    struct ListNode *a=head;
    while (a && a->next) {
            b = b->next;
            a = a->next->next;
            if (a == b)
                return true;
        }
        return false;
}

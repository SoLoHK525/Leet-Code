struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head = malloc(sizeof(struct ListNode));
    struct ListNode* current = head;
    
    int carry = 0;
    int value;
    
    int temp;
    int temp2;

    while(l1 || l2) {
        temp = l1 ? l1->val : 0;
        temp2 = l2 ? l2->val : 0;

        value = temp + temp2 + carry;
        carry = value / 10;
        
        struct ListNode* next = malloc(sizeof(struct ListNode));
        next->val = value % 10;
        next->next = NULL;

        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;

        current->next = next;
        current = next;
    }

    if (carry > 0)
    {
        struct ListNode* next = malloc(sizeof(struct ListNode));
        next->val = carry;
        next->next = NULL;
        current->next = next;
    }
    

    return head->next;
}
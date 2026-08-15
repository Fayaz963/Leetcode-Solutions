// Last updated: 8/15/2026, 5:33:42 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    
  // Base case: If the list is empty or has only one node, return the head
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Initialize pointers for the swapping process
    struct ListNode *newHead = head->next; // The second node will be the new head of the list
    struct ListNode *current = head;
    struct ListNode *prev = NULL;

    // Loop through the list in pairs
    while (current != NULL && current->next != NULL) {
        struct ListNode *nextPair = current->next->next; // Save the next pair
        struct ListNode *second = current->next;         // The second node in the current pair

        // Swap the current pair
        second->next = current;
        current->next = nextPair;

        // Link the previous pair's last node to the current pair's new head
        if (prev != NULL) {
            prev->next = second;
        }

        // Update pointers for the next iteration
        prev = current;
        current = nextPair;
    }

    return newHead;
}
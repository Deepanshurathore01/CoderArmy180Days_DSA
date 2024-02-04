Node* insert(Node* head, int pos, int val) {
    if (pos < 0) {
        std::cout << "Invalid position. Position should be non-negative.\n";
        return head;
    }

    Node* newNode = new Node(val);
    
    if (pos == 0) {
        newNode->next = head;
        return newNode;
    }

    Node* current = head;
    int count = 0;

    while (current != nullptr && count < pos - 1) {
        current = current->next;
        count++;
    }

    if (current == nullptr) {
        std::cout << "Invalid position. Cannot insert at position " << pos << ".\n";
        delete newNode;
        return head;
    }

    newNode->next = current->next;
    current->next = newNode;

    return head;
}

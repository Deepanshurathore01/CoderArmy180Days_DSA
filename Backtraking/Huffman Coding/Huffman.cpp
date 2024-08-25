class Node {
public:
    int freq;
    char c;
    Node *left, *right;

    // Constructor for leaf nodes
    Node(int frequency, char name) {
        freq = frequency;
        c = name;
        left = right = NULL;
    }

    // Constructor for internal nodes
    Node(int frequency) {
        freq = frequency;
        c = '\0'; // No character associated with internal nodes
        left = right = NULL;
    }
};

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) {
            return nullptr;
        }

        Node* current = head;
        while (current != nullptr) {
            Node* clonedNode = new Node(current->val);

            clonedNode->next = current->next;
            current->next = clonedNode;

            // Move to the next original node, skipping the clone.
            current = clonedNode->next;
        }

        current = head;

        // Set the random pointer of every cloned node.
        // If original->random points to X, then original->random->next
        // points to X's clone because the nodes are interleaved.
        while (current != nullptr) {
            if (current->random != nullptr) {
                current->next->random = current->random->next;
            }

            // Move to the next original node.
            current = current->next->next;
        }

        current = head;
        Node* clonedHead = head->next;

        // Separate the interleaved structure back into the original
        // and cloned linked lists while restoring the original links.
        while (current != nullptr) {
            Node* clonedNode = current->next;

            // Restore the original node's next pointer.
            current->next = clonedNode->next;

            // Connect the clone to the next clone, if one exists.
            if (clonedNode->next != nullptr) {
                clonedNode->next = clonedNode->next->next;
            }

            // Move to the next original node.
            current = current->next;
        }

        // The first cloned node is the head of the copied list.
        return clonedHead;
    }
};
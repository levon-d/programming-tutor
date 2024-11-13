#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Node struct using typedef
typedef struct Node {
    char *data;           // Pointer to a C string (character array)
    struct Node *next;    // Pointer to the next node in the linked list
} Node;

// Function to create a new node with a copy of the string
Node *createNode(const char *str) {
    Node *newNode = (Node *)malloc(sizeof(Node));  // Allocate memory for the new node
    if (newNode == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }

    // Allocate memory for the string and copy it into the new node
    newNode->data = (char *)malloc(strlen(str) + 1);
    if (newNode->data == NULL) {
        free(newNode);  // Free node memory if string allocation fails
        return NULL;
    }
    strcpy(newNode->data, str);  // Copy the string into the node
    newNode->next = NULL;        // Initialize the next pointer to NULL

    return newNode;  // Return the new node
}

// Function to create a linked list from an array of strings
Node *createLinkedList(const char *arr[], int size) {
    Node *head = NULL;    // Start with an empty list
    Node *tail = NULL;    // Keep track of the last node to link new nodes

    for (int i = 0; i < size; i++) {
        Node *newNode = createNode(arr[i]);  // Create a new node for the current string
        if (newNode == NULL) {
            // Handle memory allocation failure (could call a cleanup function here)
            return NULL;
        }

        if (head == NULL) {
            head = newNode;  // Set the first node as the head
        } else {
            tail->next = newNode;  // Link the new node to the end of the list
        }
        tail = newNode;  // Update the tail to the new node
    }

    return head;  // Return the head of the linked list
}

// Function to delete the linked list and free all memory
void deleteLinkedList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        Node *nextNode = current->next;  // Store the next node

        // Free the string and the node itself
        free(current->data);
        free(current);

        current = nextNode;  // Move to the next node
    }
}

// Main function to test the linked list functions
int main() {
    const char *words[] = {"hello", "world", "linked", "list", "example"};
    int size = sizeof(words) / sizeof(words[0]);

    // Create the linked list
    Node *head = createLinkedList(words, size);

    // Print the linked list
    Node *current = head;
    while (current != NULL) {
        printf("%s -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Clean up memory
    deleteLinkedList(head);

    return 0;
}


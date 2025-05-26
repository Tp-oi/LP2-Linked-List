// This is a program that demonstrates the use of addNode feature by having the
// user input a list of 20 values and removes a node at a user chosen location.
// Tyler Parnell
#include <iostream>
using namespace std;

struct node {
  int info;
  node* ptrNextNode;
};

node* addNode(node* currentNode, int i);
void printList(node* firstNode);
void removeNode(node*& head, int deletePosition);

int main() {
  cout << "Enter 20 integers of your choice\n";

  int count = 0;  // Initialize a counter to track the number of nodes added.
  int userValue = 0;  // Variable to store the user's input value.
  node* problemTwoCurrentNode =
      NULL;  // Pointer to the current node in the linked list.
  node* problemTwoHeadNode =
      NULL;  // Pointer to the head (first node) of the linked list.

  cout << "Enter the list of numbers: "
       << endl;      // Prompt the user to enter a list of numbers.
  cin >> userValue;  // Get the first value from the user.

  problemTwoCurrentNode =
      addNode(NULL, userValue);  // Create the first node with the user's input
                                 // and initialize the list.
  problemTwoHeadNode =
      problemTwoCurrentNode;  // Set the head of the list to the first node.
  count++;  // Increment the counter as the first node is added.

  while (count < 20) {  // Loop to add the remaining 19 nodes to the list.
    cin >> userValue;   // Get the next value from the user.
    problemTwoCurrentNode =
        addNode(problemTwoCurrentNode,
                userValue);  // Add a new node with the user's input.
    count++;                 // Increment the counter after adding a node.
  }

  cout << "\nYou entered ";  // Print a message indicating the list entered by
                             // the user.
  printList(problemTwoHeadNode);  // Call the function to print the entire
                                  // linked list.

  int nodeToDelete;  // Variable to store the position of the node to delete.
  cout  // Prompt the user to enter the position of the node to delete.
      << "\nEnter the node (between 1 and 19) you wish to delete. ";
  cin >> nodeToDelete;  // Get the position of the node to delete from the user.

  removeNode(problemTwoHeadNode,
             nodeToDelete);  // Call the function to remove the node at the
                             // specified position.

  cout
      << "\nThe list has been updated with node " << nodeToDelete
      << " removed: ";  // Print a message indicating the node has been removed.
  printList(problemTwoHeadNode);  // Call the function to print the updated
                                  // linked list.

  return 0;  // End of the program.
}

void removeNode(node*& head,
                int deletePosition) {  // Function to remove a node at a
                                       // specific position in the linked list.
  if (deletePosition == 1) {  // Check if the node to delete is the first node.
    node* nextNode =
        head;  // Store the current head node in a temporary pointer.
    head = head->ptrNextNode;  // Update the head to point to the next node.
    delete nextNode;           // Delete the original head node.
    return;                    // Exit the function.
  }

  node* currentNode = head;  // Start from the head of the list.
  for (int i = 1; i < deletePosition - 1;
       i++) {  // Traverse the list to find the node before the one to delete.
    currentNode = currentNode->ptrNextNode;  // Move to the next node.
  }

  node* deleteNode =
      currentNode
          ->ptrNextNode;  // Store the node to delete in a temporary pointer.
  currentNode->ptrNextNode =
      deleteNode->ptrNextNode;  // Update the current node's pointer to skip the
                                // node to delete.
  delete deleteNode;            // Delete the node.
}

node* addNode(node* currentNode,
              int i) {  // Function to add a new node to the linked list

  if (currentNode == NULL) {  // Check if the current node is NULL (i.e., the
                              // list is empty or we are adding the first node)
    node* currentNode = new node;     // Create a new node dynamically
    currentNode->ptrNextNode = NULL;  // Set the pointer of the new node to NULL
                                      // (indicating the end of the list)
    currentNode->info =
        i;  // Assign the provided value 'i' to the 'info' field of the new node
    return currentNode;  // Return the newly created node
  }

  else {
    node* newNode = new node;  // Create a new node dynamically
    currentNode->ptrNextNode =
        newNode;  // Link the current node's 'ptrNextNode' to the newly created
                  // node
    newNode->ptrNextNode = NULL;  // Set the pointer of the new node to NULL
                                  // (indicating the end of the list)
    newNode->info =
        i;  // Assign the provided value 'i' to the 'info' field of the new node
    return newNode;  // Return the newly created node
  }
}

void printList(node* currentNode) {
  // make it so it traverses the list
  while (currentNode != NULL) {
    cout << currentNode->info << " ";
    currentNode = currentNode->ptrNextNode;
  }
}
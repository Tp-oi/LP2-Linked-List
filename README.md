# Linked List Node Addition and Deletion – C++ Project

## Overview

This project demonstrates the use of singly linked lists in C++ by implementing core operations such as **node creation**, **list traversal**, and **node deletion at a specified position**. Users input 20 integers, which are stored in a dynamically created linked list. The program then allows the user to delete a node at a chosen position in the list (between positions 1 and 19).

This project was completed as part of a second computer science class focused on data structures and C++ programming fundamentals.

---

## Features

- Dynamic memory allocation using structs and pointers.
- addNode: Creates and appends a new node to the list.
- printList: Traverses and prints the contents of the list.
- removeNode: Deletes a node from a user-specified position in the list.
- Input validation and basic user interaction via console.

---

## How It Works

1. The user is prompted to input 20 integers.
2. Each integer is added to the list using the `addNode` function.
3. The full list is displayed.
4. The user specifies a node position (from 1 to 19) to delete.
5. The specified node is removed using the `removeNode` function.
6. The updated list is displayed.

---

## Example Console Output

```
Enter 20 integers of your choice  
Enter the list of numbers:  
1 2 3 4 -105 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

You entered  
1 2 3 4 -105 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20  

Enter the node (between 1 and 19) you wish to delete.  
5  

The list has been updated with node 5 removed:  
1 2 3 4 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
```

---

## File Structure

- **LP2_Linked_Lists_and_addNode .cpp**: Contains the full program logic, including function definitions and `main()`.

---

## How to Compile

You can compile the program using a C++ compiler like `g++`:

```bash
g++ -o linked_list_demo main.cpp
./linked_list_demo
```

---

## Author

Tyler Parnell (Tp-oi), Mathematics and Big Data Student.
Feel free to reach out if you have questions about the project.
Created for Computer Science 2 coursework 

*This project was completed as part of my ongoing effort to develop my data science skills and build my portfolio.*

---

## License

This project is distributed freely under the MIT license

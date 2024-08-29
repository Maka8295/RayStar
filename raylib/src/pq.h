
#ifndef UTILS_H
#define UTILS_H

#include <vector>

#define MAX 3000

// Define node structure
struct node {
    int row;
    int col;
    int x;
    int y;
    int priority;
    //Color color;
    node* neighbors[4];
};

// Define PriorityQueue structure
struct PriorityQueue {
    std::vector<node*> items; // Replaced raw array with std::vector
    int size;

    PriorityQueue() : items(MAX), size(0) {} // Constructor to initialize the vector and size
};

// Function prototypes
void swap(std::vector<node*>& pq, int i, int j);
void heapifyUp(PriorityQueue* pq, int index);
void enqueue(PriorityQueue* pq, node* n);
void heapifyDown(PriorityQueue* pq, int index);
node* dequeue(PriorityQueue* pq);
node* peek(PriorityQueue* pq);

#endif /* UTILS_H */


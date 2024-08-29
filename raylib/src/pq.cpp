
#include <iostream>
#include <vector>
#include "pq.h" // Assuming this header defines `node` and `PriorityQueue`

using namespace std;

// Define swap function to swap two nodes
void swap(vector<node*>& pq, int i, int j) {
    node* temp = pq[i];
    pq[i] = pq[j];
    pq[j] = temp;
}

// Define heapifyUp function to maintain heap property during insertion
void heapifyUp(PriorityQueue* pq, int index) {
    if (index && pq->items[(index - 1) / 2]->priority > pq->items[index]->priority) {
        swap(pq->items, (index - 1) / 2, index);
        heapifyUp(pq, (index - 1) / 2);
    }
}

// Define enqueue function to add a node to the queue
void enqueue(PriorityQueue* pq, node* n) {
    if (pq->size == MAX) {
        cout << "Priority queue is full" << endl;
        return;
    }

    pq->items[pq->size++] = n;
    heapifyUp(pq, pq->size - 1);
}

// Define heapifyDown function to maintain heap property during deletion
void heapifyDown(PriorityQueue* pq, int index) {
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < pq->size && pq->items[left]->priority < pq->items[smallest]->priority)
        smallest = left;

    if (right < pq->size && pq->items[right]->priority < pq->items[smallest]->priority)
        smallest = right;

    if (smallest != index) {
        swap(pq->items, index, smallest);
        heapifyDown(pq, smallest);
    }
}

// Define dequeue function to remove the node with the highest priority
node* dequeue(PriorityQueue* pq) {
    if (!pq->size) {
        cout << "Priority queue is empty" << endl;
        return nullptr;
    }

    node* item = pq->items[0];
    pq->items[0] = pq->items[--pq->size];
    heapifyDown(pq, 0);
    return item;
}

// Define peek function to get the node with the highest priority
node* peek(PriorityQueue* pq) {
    if (!pq->size) {
        cout << "Priority queue is empty" << endl;
        return nullptr;
    }
    return pq->items[0];
}


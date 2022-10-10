#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
#include <limits.h>


void  init_heap(heap *h, int s){
    h->size = s;
    h->rear = -1;
    h->A = (int*)malloc(sizeof(int)*s);
    return;
}

void insert_heap(heap *h, int key){
    // is heap full?
    if(h->rear == h->size - 1)
        return;
    h->A[++h->rear] = key;
    int i = h->rear;
    int p_i;
    if(!(h->rear == 0)){
        p_i = (i-1)/2;
        if(h->A[p_i] > h->A[i])
            return;
        heapify(h, i);

    }
    return;
}

void heapify(heap *h, int i){

    // to avoid seg fault check index and then check data 

    int i = h->rear;
    int i_p = (i-1)/2;
    int temp;
    while(h->A[i_p] < h->A[i]){
        temp = h->A[i_p];
        h->A[i_p] = h->A[i];
        h->A[i] = temp;
        i = i_p;
        i_p = (i-1)/2;
    }

}

void traverse(heap h){
    int i = h.rear;
    for(int j =0; j<i;j++){
        printf("%d", h.A[j]);
    }
}

int return_max(heap h){
    if(h.rear == -1){
        return INT_MIN;
        return h.A[0];
    }

}

int delete_max(heap *h){
    if(h->rear == -1)
        return INT_MIN;
    int ele = h->A[0];
    int temp;
    temp = h->A[h->rear];
    h->A[h->rear] = h->A[0];
    h->A[0] = temp;

    --h->rear;
    heapify_td(h);
    return ele;

}

void heapify_r(int array[], int size, int i)
{
  if (size > 1){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size && array[l] > array[largest])
      largest = l;
    if (r < size && array[r] > array[largest])
      largest = r;
    if (largest != i)
    {
      swap(&array[i], &array[largest]);
      heapify_td(array, size, largest);
    }
  }
}
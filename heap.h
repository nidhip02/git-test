// max heap 

typedef struct heap{
    int *A;
    int size, rear;
}heap;

// c++ allows heap over flow but c doesnt
void  init_heap(heap *h, int s);
void insert_heap(heap *h, int data);
int return_max(heap p); 
int delete_max(heap *p);
void traverse(heap h);
//void heapify_td(heap *h);

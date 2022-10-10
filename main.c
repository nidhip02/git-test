#include <stdio.h>
#include<stdlib.h>
#include "heap.h"



int main(){
    heap p;
    init_heap(&p, 10);
    insert_heap(&p, 30);
    insert_heap(&p, 80);
    insert_heap(&p, 70);
    insert_heap(&p, 63);
    insert_heap(&p, 54);
    insert_heap(&p, 85);
    insert_heap(&p, 100);
    insert_heap(&p, 37);
    insert_heap(&p, 10);

    traverse(p);
}
#include <stdio.h>

struct node {
    struct node* lchild, rchild;
    int data;
};

void createBinaryTree() {
    printf(" ");
}

// Min Heap

void createMinHeap() { 

}

void insertMinHeap() {

}

void deleteMinHeap() {

}

// Max Heap

void createMaxHeap() {

}

void insertMaxHeap() {

}

void deleteMaxHeap() {

}

int main() {
    int opt;
    struct node* BT, MIN_HEAP, MAX_HEAP;
    printf("\n\t- Menu -\n1. Construct Binary Tree\n\n2. Construct Min Heap\n3. Insert into Min Heap\n4. Delete from Min Heap\n\n5. Construct Max Heap\n6. Insert into Max Heap\n7. Delete from Max Heap\n\n8. Exit\nChoose Option: ");
    scanf("%d", &opt);
    switch (opt) {
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            break;

        case 8:
            break;

        default:
            printf("\n\tPlease choose a valid option!");
            main();
            break;
    }

    return 0;
}
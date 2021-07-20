#include <stdio.h>

typedef struct node {
  int data;
  struct node* next;
} node;

void printlist(node*);

int main() {
  node ob1 = {10,NULL};
  node ob2 = {54,NULL};
  node ob3 = {874,NULL};

  node* start = &ob1;
  ob1.next = &ob2;
  ob2.next = &ob3;
  ob3.next = NULL;

  printlist(start);
}
void printlist(node* start) {
  while (start != NULL) {
    printf("%d\n", start->data);
    start = start->next;
  }
};

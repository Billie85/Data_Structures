#include <stdio.h>
#include <stdlib.h>

struct t_node {

  struct t_node *next;
  struct t_node *prev;
  int value;
};
//この関数は通常の線形リストnextの順で出力する
void print_value(struct t_node *head) {
  struct t_node *traverser;

  traverser = head;
  while (traverser != NULL) {
    printf("%d\n", traverser->value);
    traverser = traverser->next;
  }
}

//この関数はprevの順で出力する関数。
void print_backward(struct t_node *tmp) {
  struct t_node *traverser;
  traverser = tmp;

  while (traverser != NULL) {
    printf("%d\n", traverser->value);
    traverser = traverser->prev;
  }
}

// 1sh node
int main(void) {
  struct t_node *node;
  struct t_node *tmp;
  struct t_node *head;

  // add 1st node;
  node = malloc(sizeof(struct t_node));
  node->value = 1;
  node->next = NULL;
  node->prev = NULL;
  head = node;
  tmp = node;

  // add 2nd node;
  node = malloc(sizeof(struct t_node));
  node->value = 3;
  node->next = NULL;
  node->prev = tmp;
  tmp->next = node;
  tmp = node;

  // add 3nd node;
  node = malloc(sizeof(struct t_node));
  node->value = 4;
  node->prev = tmp;
  node->next = NULL;
  tmp->next = node;
  tmp = node;

  print_value(head);
  printf("逆方向\n");
  print_backward(tmp);
}

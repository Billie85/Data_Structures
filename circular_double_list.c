#include <stdio.h>
#include <stdlib.h>

struct t_node {
  struct t_node *next;
  struct t_node *prev;
  int value;
};

void print_value(struct t_node *tmp) {
  struct t_node *traverser;
  traverser = tmp;
  printf("%d\n", tmp->value);
  traverser = traverser->next;
}

void print_back(struct t_node *tmp) {
  struct t_node *traverser;
  traverser = tmp;
  printf("%d\n", tmp->value);
  traverser = traverser->prev;
}

struct t_node *circular_double_list(int value) {
  struct t_node *tmp;

  tmp = malloc(sizeof(struct t_node *));
  tmp->next = tmp;
  tmp->prev = tmp;
  tmp->value = value;
  return tmp;
}

int main(void) {
  struct t_node *tmp;
  int value;

  value = 78;
  tmp = circular_double_list(value);
  print_value(tmp);

  value = 89;
  tmp = circular_double_list(value);
  print_value(tmp);

  /* value = 9;
   tmp = circular_double_list(value);
   printf("%d\n", tmp->value);*/

  return 0;
}

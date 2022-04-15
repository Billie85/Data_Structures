#include <stdio.h>
#include <stdlib.h>

struct single_linked_list {
  int value;
  struct single_linked_list *next;
};

typedef struct single_linked_list t_node;

int main(void) {
  t_node *node;
  t_node *head;

  node = (t_node *)malloc(sizeof(t_node *));
  node->value = 3;
  node->next = NULL;
  head = node;

  node = (t_node *)malloc(sizeof(t_node *));
  node->value = 8;
  node->next = NULL;
  head->next = node;

  node = (t_node *)malloc(sizeof(t_node *));
  node->value = 9;
  node->next = NULL;
  head->next->next = node;

  while (head != NULL) {
    printf("%d\n", head->value); //値を出力したいから。
    head = head->next;           //次のアドレス
    //インクリメントの代わりに次のノードのアドレスを指したいから、headを回してあげる（次アドレスにさしてあげることで。無限ループはしない。)
  }
}

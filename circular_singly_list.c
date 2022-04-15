#include <stdio.h>
#include <stdlib.h>

//大きな違いとしては、headを設定していない。
// while文で回さずに1つずつのノードを出力している。
//やりたい事としては、while文を使って回すことをやりたい。
struct t_node {
  int value;
  struct t_node *next;
};

struct t_node *circular_singly_list(int value) {
  struct t_node *tmp;
  struct t_node *head;

  tmp = malloc(
      sizeof(struct t_node *)); //ここで使われてるtmpは新しいnode を示している。
  tmp->next = tmp;
  tmp->value = value;
  return tmp;
}

int main(void) {
  struct t_node *tmp;
  int value;

  value = 35;
  tmp = circular_singly_list(value);
  printf("%d\n", tmp->value);

  value = 80;
  tmp = circular_singly_list(value);
  printf("%d\n", tmp->value);

  value = 89;
  tmp = circular_singly_list(value);
  printf("%d\n", tmp->value);

  value = 3;
  tmp = circular_singly_list(value);
  printf("%d\n", tmp->value);

  return (0);
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int max;
  int ptr;
  int *stk;
} IntStack;

int Initialize(IntStack *s, int max) {
  s->ptr = 0;
  if((s->stk = calloc(max, sizeof(int))) == NULL) {
    s->max = 0;
    return -1;
  }
  s->max = max;
  return 0;
}

int Push(IntStack *s, int x) {
  if(s->ptr >= s->max)
    return -1;
  s->stk[s->ptr++] = x;
  return 0;
}

int Pop(IntStack *s, int *x) {
  if(s->ptr <= 0)
    return -1;
  *x = s->stk[--s->ptr];
  return 0;
}

void Print(const IntStack *s) {
  int i, sum = 0;
  for (i=0; i<s->ptr; i++) {
    sum += s->stk[i];
  }
  printf("%d\n", sum);
}

void Terminate(IntStack *s) {
  if(s->stk != NULL) 
    free(s->stk);
  s->max = s->ptr = 0;
}

int main() {
  IntStack s;
  int num, tmp = 0;
  scanf("%d", &num);
  if(Initialize(&s, num*4) == -1) {
    return -1;
  }

  for(int i=0; i<num; i++) {
    scanf("%d", &tmp);
    if(tmp != 0) {
      Push(&s, tmp);
    }
    else {
      Pop(&s, &tmp);
    }
  }

  Print(&s);
  Terminate(&s);
  return 0;
}

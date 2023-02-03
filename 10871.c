#incldue <stdio.h>

int main() {
  int num, range;
  scanf("%d %d", &num, &range);
  int nums;

  for (int i = 1; i <= num; i++) {
    scanf("%d", &nums);
    if (nums < range) {
      printf(" %d", nums);
    }
  }
}

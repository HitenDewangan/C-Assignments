//Problem 9 Truth table dor AND, OR,NOT, NAND, NOR
#include <stdio.h>

int AND(int A, int B) {
  switch (A) {
    case 0:
      switch (B) {
        case 0:
          return 0;
        case 1:
          return 0;
      }
      break;
    case 1:
      switch (B) {
        case 0:
          return 0;
        case 1:
          return 1;
      }
  }
}

int OR(int A, int B) {
  switch (A) {
    case 0:
      switch (B) {
        case 0:
          return 0;
        case 1:
          return 1;
      }
      break;
    case 1:
      switch (B) {
        case 0:
          return 1;
        case 1:
          return 1;
      }
  }
}

int NOT(int A) {
  switch (A) {
    case 0:
      return 1;
    case 1:
      return 0;
  }
}

int NAND(int A, int B) {
  return NOT(AND(A, B));
}

int NOR(int A, int B) {
  return NOT(OR(A, B));
}

int main() {
  int A, B;

  printf("Enter value for A: ");
  scanf("%d", &A);

  printf("Enter value for B: ");
  scanf("%d", &B);

  printf("AND(%d, %d) = %d\n", A, B, AND(A, B));
  printf("OR(%d, %d) = %d\n", A, B, OR(A, B));
  printf("NOT(%d) = %d\n", A, NOT(A));
  printf("NAND(%d, %d) = %d\n", A, B, NAND(A, B));
  printf("NOR(%d, %d) = %d\n", A, B, NOR(A, B));

  return 0;
}

#include <stdio.h>

int fun1(unsigned word) { return (int)((word << 24) >> 24); }

int fun2(unsigned word) { return ((int)word << 24) >> 24; }

int main(void) {
  printf("fun1(0x00000076)=0x%.8x\n", fun1(0x00000076));
  printf("fun2(0x00000076)=0x%.8x\n", fun2(0x00000076));
  printf("---\n");
  printf("fun1(0x87654321)=0x%.8x\n", fun1(0x87654321));
  printf("fun2(0x87654321)=0x%.8x\n", fun2(0x87654321));
  printf("---\n");
  printf("fun1(0x000000c9)=0x%.8x\n", fun1(0x000000c9));
  printf("fun2(0x000000c9)=0x%.8x\n", fun2(0x000000c9));
  printf("---\n");
  printf("fun1(0xedcba987)=0x%.8x\n", fun1(0xedcba987));
  printf("fun2(0xedcba987)=0x%.8x\n", fun2(0xedcba987));

  return 0;
}

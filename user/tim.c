#include "../kernel/types.h"
#include "../kernel/stat.h"
#include "user.h"

int main(int argc, char const *argv[]) {
  printf("My first xv6 program! %d\n", date());
  return 0;
}

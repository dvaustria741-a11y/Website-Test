#include <emscripten.h>
#include <cstdio>

extern "C" {
  EMSCRIPTEN_KEEPALIVE
  int add(int a, int b) {
    return a + b;
  }
}

int main() {
  printf("C++ WebAssembly site running!\n");
  return 0;
}

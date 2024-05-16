#include "Log.h"

void Conditionals() {
  int x = 5;
  if (x == 5)
    Log("Comparison is true");

  const char* ptr = "Hello";
  // if (ptr != nullptr)
  if (ptr)
    Log(ptr);
  if (ptr == "Hello")
    Log("Ptr is Hello!");
  else
    Log("Ptr is null!");
}

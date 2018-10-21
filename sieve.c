#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int targetPrime) {
  int size = targetPrime * log(targetPrime) * 1.25;
  char* nums = malloc(size);
  int current = 1;
  int ct = 0;
  for(int i = 0; i < size; i++)
    nums[i] = 0;
  while (ct < targetPrime) {
    current++;
    if (! nums[current]) {
      for(int x = current * 2; x < size; x += current)
	nums[x] = 1;
      ct++;
    }
  }
  free(nums);
  return current;
}

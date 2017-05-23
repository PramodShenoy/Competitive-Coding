#!/bin/python3

import sys

numbers = list(map(int, input().split()))

numbers.sort()

min=(sum(numbers[0:4]))
max=(sum(numbers[-4:]))
print("{} {}".format(min,max))


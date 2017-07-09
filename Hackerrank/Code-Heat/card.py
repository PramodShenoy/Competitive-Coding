def subset_sum(numbers, target, partial=[], partial_sum=0):
    if partial_sum == target:
        yield partial
    if partial_sum >= target:
        return
    for i, n in enumerate(numbers):
        remaining = numbers[i + 1:]
        yield from subset_sum(remaining, target, partial + [n], partial_sum + n)

cards = list(map(int, input().split(' ')))
cards.sort()
score = 0
score +=len(list(subset_sum(cards,15)))

from collections import Counter

a = dict(Counter(cards))
import math

def nCr(n,r):
    f = math.factorial
    return f(n) / f(r) / f(n-r)

for i, j in a.items():
    if j>1:
    	score+=nCr(j,2)
        
print(int(score))

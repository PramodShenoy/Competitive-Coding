import sys
import math
    
def fsa(arr):
    l=len(arr)
    l=int(l/2)
    res=0
    left=arr[:l]
    right=arr[l:]
    sum_left=sum(left)
    sum_right=sum(right)
    return (abs(sum_left-sum_right))
                  
n = int(input())
a = list(map(int, input().split(' ')))
#print(a)
res=fsa(a)
print(res)

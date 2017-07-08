
cards = list(map(int, input().split(' ')))
cards.sort()
score = 0

from itertools import groupby
p = [len(list(group)) for key, group in groupby(cards)]

for item in p:
	if item>1:
		score+=item

s = 0
for i in range(len(cards)):
	s = s+cards[i]
	if s == 15:
		score=score+1
		s = s - cards[i]

print(score)
import collections


def fact(n):
    x = 1
    for i in range(1, n+1):
        x *= i
    return x


s = input()
s = s.lower()

vowels_cnt = ['a', 'e', 'i', 'o', 'u']

vowels = []
for i in s:
    if i in vowels_cnt:
        vowels.append(i)

consonants = []
for k in s:
    if k not in vowels:
        consonants.append(k)
# print(consonants)
frequencies_1 = collections.Counter(consonants)
tmp_1 = 0
# print(frequencies_1)
for key, value in frequencies_1.items():
    if value > 1:
        tmp_1 += fact(value)
if tmp_1 != 0:
    total = fact(len(consonants)+1)//tmp_1
else:
    total = fact(len(consonants)+1)
# print(total)

frequencies_2 = collections.Counter(vowels)
# print(frequencies_2)
tmp_2 = 0
for key, value in frequencies_2.items():
    if value > 1:
        tmp_2 += fact(value)
if tmp_2 != 0:
    total *= fact(len(vowels))//tmp_2
else:
    total *= fact(len(vowels))

print(total)

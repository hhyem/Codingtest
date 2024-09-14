from collections import Counter

X = []
Y = []
len_arr = []
answer = []

for i in range(0,3):
    x, y = map(int, input().split())
    X.append(x)
    Y.append(y)

#요소 별 개수 세기 
counts = Counter(X) #Counter({5: 4, 7: 2})
# print(len(counts.items())) #2

for element, count in counts.items():
    len_arr.append(count)
    tmp = min(len_arr)

for k, v in counts.items():
    if v == tmp:
        answer.append(k)

counts = Counter(Y)

for element, count in counts.items():
    len_arr.append(count)
    tmp = min(len_arr)

for k, v in counts.items():
    if v == tmp:
        answer.append(k)

print(*answer)

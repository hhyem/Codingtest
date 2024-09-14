cnt = 1
numbox = 1
num = int(input())

while num > numbox:
   numbox += 6 * cnt
   cnt += 1

print(cnt)

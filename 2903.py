n = int(input())
line = 2
sum = 0

for i in range(1, n+1):
    sum = line + 1
    sum*=sum
    line*=2

print(sum)

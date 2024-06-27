#arr = [[0 for col in range(10)] for row in range(10)]
#arr = [[0] * 100 for _ in range(100)]
arr = [[0 for col in range(100)] for row in range (100)]

n = int(input())
count = 0

for k in range(n):
    a, b = map(int, input().split())
    for i in range(a, a+10):
        for j in range(b, b+10):
            arr[i][j] = 1


for i in range(0, 100):
    for j in range(0, 100):
        if arr[i][j] == 1:
            count+=1
        
print(count)

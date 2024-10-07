n = int(input())

x = []
y = []

for i in range(0, n):
    num1, num2 = map(int, input().split())
    x.append(num1)
    y.append(num2)

#x중에서 가장 작은 숫자, x중에서 가장 큰 숫자 (가로 길이)
#y중에서 가장 작은 숫자, y중에서 가장 큰 숫자 (세로 길이)

a = max(x) - min(x)
b = max(y) - min(y)

print(a*b)

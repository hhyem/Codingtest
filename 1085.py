x,y, w,h = map(int, input().split())

line = []

line.append(x)
line.append(h-y)
line.append(w-x)
line.append(y)

print(min(line))

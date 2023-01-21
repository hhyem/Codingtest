student = []

for i in range(1,31):
    student.append(i)

for i in range (0,28):
    temp = int(input())
    student.remove(temp)

print(min(student))
print(max(student))

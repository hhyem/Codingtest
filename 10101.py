x = int(input())
y = int(input())
z = int(input())

if x==60 and y==60 and z==60:
    print("Equilateral")
elif x+y+z==180 and ((x==y or x==z or y==z)):
    print("Isosceles")
elif x+y+z==180 and ((x!=y or x!=z or y!=z)):
    print("Scalene")
elif x+y+z!=180:
    print("Error")

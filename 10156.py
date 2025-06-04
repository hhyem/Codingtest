a, b, c = map(int, input().split())

#a : 과자 1개 가격
#b : 과자 개수
#c : 현재 용돈

sum = a*b
if sum>c:
    print(sum-c)
else:
    print(0)

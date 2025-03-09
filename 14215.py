a,b,c, = map(int, input().split())

#삼각형 조건을 만족하는지 확인 
max = max(a,b,c)
tmp = a+b+c-max

if max < tmp: #조건 충족
    print(a+b+c)
else: #조건 불충족
    max = tmp-1
    print(max+tmp)

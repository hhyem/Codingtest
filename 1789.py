a = int(input()) 
sum = 0

if a==1 or a==2:
    print(1,end='')

for i in range(1, a):
    sum+=i #3

    if sum>a:
        tmp = sum-i #더하기 전으로 돌려놓기
        ttmp = a-tmp #S까지 몇 더하면 되는지
        i-=1
        if ttmp>i:
            print(ttmp, end='')
        else:
            print(i, end='')
        break
    if sum==a:
        print(i, end='')
        break

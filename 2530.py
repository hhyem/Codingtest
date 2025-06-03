a, b, c = map(int, input().split()) #17 40 45
d = int(input()) 

def hour_plus(a):
    tmp = int(a/24)
    a-=(tmp*24)
    return a

def min_plus(a, b):
    tmp = int(b/60) #60 몇번 넘는지 -> 2..20
    a+=tmp #tmp만큼 더함 -> a=19
    b -= tmp*60
    # print("min_plus", tmp, a, b)
    return a, b

def sec_plus(b, c):
    tmp = int(c/60)
    b+=tmp
    c-=tmp*60
    return b, c

min = int(d/60) #100
cho = int(d%60) #25
# print("계산 전 ", min, cho)
    
b+=min #140
if b >= 60: 
    a, b = min_plus(a,b)
if a>=24:
     a = hour_plus(a)
# print("min 계산 후 ", a, b, c)
    
c+=cho
if c>=60:
    b, c = sec_plus(b, c)
if b>=60:
    a, b = min_plus(a,b)
if a>=24:
    a = hour_plus(a)

print(int(a),int(b),int(c))

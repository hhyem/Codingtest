input = int(input())
k = 1

while(1):
    if(k-1)*(k)/2 < input & input<= (k)*(k+1)/2:
        break;
    k+=1

if k % 2 != 0:
    a = k*(k+1)/2
    print(int(a-input + 1), "/", int(k-(a-input)),sep='')
else:
    a = k*(k+1)/2
    print(int(k-(a-input)), "/", int(a-input+1),sep='')

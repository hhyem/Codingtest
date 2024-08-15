def solution(num):
    answer = 1
    
    while 1:
        if num == 1:
            answer = 0
            break
            
        if(num % 2 == 0):
            num/=2
        else:
            num = num*3+1
        
        if num != 1:
            answer+=1
            if answer >= 500:
                answer = -1
                break
        else:
            if answer == 0:
                answer = 0
            else:
                break    
    
    return answer

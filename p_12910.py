def solution(arr, divisor):
    answer = []
    j = 0
    
    for i in range(0, len(arr)):
        if arr[i] % divisor == 0:
            answer.append(arr[i])
            j+=1
    
    if len(answer) == 0:
        answer.append(-1)
        
    answer = sorted(answer)
            
    return answer

def solution(s):
    s = s.lower()
    
    cnt_p = 0
    cnt_y = 0
    
    cnt_p = s.count('p')
    cnt_y = s.count('y')
    if(cnt_p != cnt_y):
        answer = False
    else:
        answer = True
        
    if ('s' in s == False) and ('y' in s == False):
        answer = True

    return answer


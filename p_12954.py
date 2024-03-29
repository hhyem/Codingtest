#x씩 증가하는 숫자 n개 리턴 
#x : 2, n : 5 > 2, 4, 6, 8, 10
def solution(x, n):
    answer = []
    #내가 짠 코드 문제점 : 런타임 에러 
    answer = [i for i in range(x,n*x+x,x)]
    #https://1ets-just-do-it.tistory.com/29 참고
    #https://blog.naver.com/qbxlvnf11/221434003885 참고 
    #for문 변수는 횟수만 돌리고 계산은 i에서 한다. 1부터 n+1까지 돌린 후 
    #i와 x를 곱하면 된다.. 
    answer = [x*i for i in range(1, n+1)]
    return answer

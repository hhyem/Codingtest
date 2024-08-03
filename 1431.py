import re

n = int(input())

#문자열 2개 사전 순으로 정렬 
def sort_two_str(str1, str2):
    strings = [str1, str2]
    strings.sort()
    return strings[0], strings[1]

#숫자만 덧셈 
def int_sum(a):
    tmp = a
    b = c = 0
    while a > 9:
        a = tmp // 10
        b = tmp % 10
        c = b + c
        tmp = a
    c = c + tmp
    return(c)

str = []
re_str = []
tmp_int_i = 0
tmp_int_j = 0

#배열 값 입력 
for i in range(0,n):
    tmp_str = input()
    str.append(tmp_str)
    re_str.append(tmp_str)

#1. A B 길이가 다르면 짧은 게 먼저
#2. 길이가 같으면 숫자 자릿수의 합이 작은 게 먼저 
#3. 1, 2 둘다 안되면 사전순으로 비교  
for i in range(0,n):
    for j in range(i+1, n):
        if(len(str[i]) > len(str[j])): #앞 문자열 길이가 더 길 때 값 변경 
            str[i], str[j] = str[j], str[i]
        elif (len(str[i]) == len(str[j])): #문자열 길이가 같을 때 
            #숫자만 추출 
            tmp_int_i = re.findall(r'\d+', str[i])
            tmp_int_i = ''.join(tmp_int_i)
            tmp_int_j = re.findall(r'\d+', str[j])
            tmp_int_j = ''.join(tmp_int_j)
            #int형으로 변환 -> 만약 숫자가 없다면 0으로 변환 
            if (tmp_int_i):
                tmp_int_i = int(tmp_int_i)
            else:
                tmp_int_i = int(0)
            
            if tmp_int_j:
                tmp_int_j = int(tmp_int_j)
            else:
                tmp_int_j = int(0)
                
            #숫자만 더하기 
            tmp_i = int_sum(tmp_int_i)
            tmp_j = int_sum(tmp_int_j)

            #숫자 합에 따른 위치 변경 
            if(tmp_i > tmp_j):
                str[i], str[j] = str[j], str[i]
            elif (tmp_i == tmp_j): #만약 두 숫자 합이 같다면 두 문자열의 위치만 변경 
                str[i], str[j] = sort_two_str(str[i], str[j])
            
print(*str, sep='\n')

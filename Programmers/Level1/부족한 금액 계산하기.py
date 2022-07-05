def solution(price, money, count):
    answer = -1
    need = 0
    for i in range(count):
        need += (i+1)*price
    if money>=need :
        answer = 0
    else :
        answer = need - money
    return answer

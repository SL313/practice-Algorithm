def solution(left, right):
    answer = 0
    for i in range(left, right+1):
        if check(i) % 2 == 0:
            answer += i
        else:
            answer -= i
    return answer

def check(num):
    count = 0
    for i in range(1, num):
        if num % i == 0:
            count += 1
    return count+1

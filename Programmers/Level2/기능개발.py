import math

def solution(progresses, speeds):
    answer = []
    stack = []
    temp = 0
    for i, value in enumerate(progresses):
        check = math.ceil((100-value)/speeds[i])
        if check > temp:
            temp = check
            answer.append(0)
        else:
            check = temp
        stack.append(check)
        answer[-1] += 1
    return answer

import math
def solution(s):
    answer = ''
    if len(s)%2 == 0:
        answer = s[math.floor(len(s)/2)-1:math.ceil(len(s)/2)+1]
    else:
        answer = s[math.floor(len(s)/2):math.ceil(len(s)/2)]
    return answer

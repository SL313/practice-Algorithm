def solution(numbers):
    condition = [0,1,2,3,4,5,6,7,8,9]
    return sum(list(set(condition)-set(numbers)))

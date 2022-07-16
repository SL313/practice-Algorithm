from itertools import *

def solution(nums):
    answer = 0
    result = list(combinations(nums, 3))
    for i in result:
        if isPrime(sum(i)) == True:
            answer += 1
    return answer

def isPrime(num):
    for i in range(2, num):
        if num % i == 0 :
            return False
    return True

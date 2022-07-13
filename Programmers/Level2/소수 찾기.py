from itertools import *

def solution(numbers):
    stack = []
    result = []
    num = list(map(str, numbers))
    
    for i in range(1, len(num)+1):
        result.append(list(permutations(num, i)))
        
    for a in range(len(result)):
        for i in result[a]:
            check = int(''.join(i))
            if check > 1 and prime(check) == True:
                stack.append(check)
                
    return len(set(stack))

def isPrime(num):
    for i in range(2, num):
        if num % i == 0:
            return False
    return True

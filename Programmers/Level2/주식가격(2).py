def solution(prices):
    answer = [0] * len(prices)
    stack = []
    
    for i, data in enumerate(prices):
        while stack and data < prices[stack[-1]]:
            answer[stack[-1]] = i-stack[-1]
            stack.pop()
        stack.append(i)
    
    while stack:
        answer[stack[-1]] = len(prices) - stack[-1] - 1
        stack.pop()
    
    return answer

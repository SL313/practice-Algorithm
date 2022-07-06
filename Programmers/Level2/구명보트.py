def solution(people, limit):
    answer = 0
    people.sort()
    
    start = 0
    end = len(people)-1
    
    while end >= start :
        if people[end] <= limit-people[start] :
            start+=1
        end-=1
        answer+=1
        
    return answer

def solution(n, lost, reserve):
    answer = 0
    answer = n-len(lost)
    
    for i in range(0, len(lost)):
        for j in range(0, len(reserve)):
            if(lost[i]==reserve[j]):
                answer+=1
                lost[i]=0
                reserve[j]=0
                break
    
    lost.sort()
    reserve.sort()
    
    for i in range(0, len(lost)):
        if(lost[i]!=0):
            for j in range(0, len(reserve)):
                if (reserve[j]==0): continue
                elif(reserve[j]==lost[i]-1 or reserve[j]==lost[i]+1):
                    answer+=1
                    reserve[j]=0
                    break
                    
    return answer

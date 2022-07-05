def solution(answers):
    answer = []
    student1 = [1,2,3,4,5]
    student2 = [2,1,2,3,2,4,2,5]
    student3 = [3,3,1,1,2,2,4,4,5,5]
    check1=0
    check2=0
    check3=0
    max=0
    for i in range(len(answers)):
        if answers[i]==student1[i%5]:
            check1+=1
            if(max<check1):
                max=check1
        if answers[i]==student2[i%8]:
            check2+=1
            if(max<check2):
                max=check2
        if answers[i]==student3[i%10]:
            check3+=1
            if(max<check3):
                max=check3
    if max==check1:
        answer.append(1)
    if max==check2:
        answer.append(2)
    if max==check3:
        answer.append(3)
    return answer

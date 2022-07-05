def solution(array, commands):
    answer = []
    for i in range(0, len(commands)):
        newArray = []
        range1 = commands[i][0]
        range2 = commands[i][1]
        num = commands[i][2]
        newArray = list(array[range1-1:range2])
        newArray.sort()
        answer.append(newArray[num-1])
    return answer

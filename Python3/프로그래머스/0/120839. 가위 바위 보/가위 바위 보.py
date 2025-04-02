def solution(rsp):
    answer = "";
    for(i, j) in enumerate(rsp):
        if j == "2":
            answer += "0";
        elif j == "0":
            answer += "5";
        else:
            answer += "2";
    return answer;
def solution(my_string):
    sum = 0;
    for i in range(len(my_string)):
        if my_string[i].isdecimal():
            sum += (int(my_string[i]));
    return sum;
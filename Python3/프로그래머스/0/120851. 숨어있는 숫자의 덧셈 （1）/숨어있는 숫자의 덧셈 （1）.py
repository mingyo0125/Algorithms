def solution(my_string):
    sum = 0;
    for ch in my_string:
        if ch.isdecimal():
            sum += int(ch);
    return sum;
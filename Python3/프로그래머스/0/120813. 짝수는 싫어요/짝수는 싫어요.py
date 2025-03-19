def solution(n):
    cnt = int(n / 2) + n % 2;
    arr = [0] * cnt;
    for i in range(cnt):
        arr[i] = 2 * i + 1;
    return arr;
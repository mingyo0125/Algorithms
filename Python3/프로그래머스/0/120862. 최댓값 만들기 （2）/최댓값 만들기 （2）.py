def solution(numbers):
    numbers.sort();
    num1 = numbers[0] * numbers[1];
    num2 = numbers[-1] * numbers[-2];
    return max(num1, num2);
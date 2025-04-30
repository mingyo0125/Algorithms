def solution(array):
    biggest = max(array)
    return [biggest, array.index(biggest)]
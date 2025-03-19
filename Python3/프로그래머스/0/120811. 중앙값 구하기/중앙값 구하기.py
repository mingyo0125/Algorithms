def solution(array):
    sorted_array = sorted(array) 
    idx = int(len(sorted_array) * 0.5);
    return sorted_array[idx];
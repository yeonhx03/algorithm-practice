def solution(n):
    answer = []
    for c in str(n)[::-1]:
        answer.append(int(c))
    return answer
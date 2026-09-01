# 자연수 뒤집어 배열로 만들기
def solution(n):
    answer = []
    for c in str(n)[::-1]:
        answer.append(int(c))
    return answer
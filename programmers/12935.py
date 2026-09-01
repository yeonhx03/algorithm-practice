# 제일 작은 수 제거하기
# Solution 1 직접 for문으로 조회, 구현에 초점
def solution(arr):
    if len(arr) <= 1:
        return [-1]

    minimum = arr[0]
    index = 0

    for i in range(len(arr)):
        if minimum >= arr[i]:
            minimum = arr[i]
            index = i

    del arr[index]

    return arr


# Solution 2, 파이썬 문법 활용 단, min도 배열을 한번 훑기 때문에 시간 복잡도는 동일
def solution(arr):
    if len(arr) <= 1:
        return [-1]

    arr.remove(min(arr))
    return arr
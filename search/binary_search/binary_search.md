# Binary Search
> 이진탐색은 <bold>정렬된<bold> 리스트에서 검색 범위를 줄어나가면서 값을 찾는 알고리즘

## 작동 방식
1. 배열의 중간 값을 가져온다.

2. 중간 값과 검색 값을 비교한다.<br>
    a. 중간 값이 검색 값과 같다면 종료<br>
    b. 중간 값보다 검색 값이 크다면 중간 값 기준 배열의 오른쪽 구간을 대상으로 탐색<br>
    c. 중간 값보다 검색 값이 작다면 중간 값 기준 배열의 왼쪽 구간을 대상으로 탐색

3. 값을 찾을 때까지 반복


## 시간 복잡도
O(logN)
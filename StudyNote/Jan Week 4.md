> 1월 3주차 (27 ~ 31)
> 이곳은 해당 주차에 문제를 풀면서 알게된 노하우 / 정보를 올리는 공간 

## Todo 
- 백준 단계별로 풀어보기(매일 2문제씩)

## Tips
- [1018 체스판 다시 칠하기]

- [1436 영화감독 숌]
    - 수를 하나하나 늘려가면 666이 연속으로 3번이상 들어간 수 찾기 -> 브루트 포스 알고리즘 
    1. 숫자 중간이든 끝이든 666이면 되니까, x % 1000을 했을 때 666인지 체크,
    오른쪽의 한 자리씩 없애가며 반복. ( x /= 10 )
    2. 만족하는 x를 찾으면, N을 하나씩 줄이며 while문으로 N==0 이면 멈춘다.

    
## Progress 
- 1018 1436

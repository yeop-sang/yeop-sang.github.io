# [집합](https://acmicpc.net/problem/11723)

## 문제
비어있는 공집합 S가 주어졌을 때, 아래 연산을 수행하는 프로그램을 작성하시오.

- add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
- remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
- check x: S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
- toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
- all: S를 {1, 2, ..., 20} 으로 바꾼다.
- empty: S를 공집합으로 바꾼다.

## 입력
첫째 줄에 수행해야 하는 연산의 수 M (1 ≤ M ≤ 3,000,000)이 주어진다.

둘째 줄부터 M개의 줄에 수행해야 하는 연산이 한 줄에 하나씩 주어진다.

## 출력
check 연산이 주어질때마다, 결과를 출력한다.

## 예제 입력 1
```
26
add 1
add 2
check 1
check 2
check 3
remove 2
check 1
check 2
toggle 3
check 1
check 2
check 3
check 4
all
check 10
check 20
toggle 10
remove 20
check 10
check 20
empty
check 1
toggle 1
check 1
toggle 1
check 1
```
## 예제 출력 1
```
1
1
0
1
0
1
0
1
0
1
1
0
0
0
1
0
```

## 참고할 내용
1. c++ buffer 출력 속도
    - https://jaimemin.tistory.com/1521
    - ```cpp
      ios::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
      ``` 
      - 위 코드를 통해 입출력 buffer와의 동기를 꺼서 출력 속도를 향상 시킬 수 있다.
    - 위와 마찬가지로 `endl` 또한 출력 buffer를 비우는 일도 동시에 진행하므로 속도를 저하시킬 수 있어
   사용을 지양하는 것이 좋다. 
      - 본인 또한 `endl` 코드의 사용으로 속도 저하가 일어나 문제를 해결 못한 경험이 있다.
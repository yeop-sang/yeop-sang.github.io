# February 20, 2022 TIL

## cpp
- [동적 메모리 할당](https://coding-factory.tistory.com/480)
    -   ```cpp
        //arr에 N개의 배열 할당
        int N = 10;
        int *arr = new int[N];
        delete[] arr;
        ```
- [특정값 메모리에 할당](https://minusi.tistory.com/entry/memset-%EC%82%AC%EC%9A%A9%EC%8B%9C-%EC%A3%BC%EC%9D%98%ED%95%A0-%EC%A0%90)
    1. memset
        -   ```cpp
            memset(arr, 0, sizeof(arr));
            ```
        - 단점, 1byte단위로 setting이 되어 0 이외의 값이 들어가는 순간 특이한 값으로 표현될 수 있음
    2. [fill](https://en.cppreference.com/w/cpp/algorithm/fill)
        -   ```cpp
            fill(arr, arr + N, 0);
            ```
        - 정의: `void fill( ForwardIt first, ForwardIt last, const T& value );`
- [string int로 형변환](https://www.cplusplus.com/reference/string/stoi/)
    - stoi
- [입출력 버퍼 비동기화](https://jaimemin.tistory.com/1521)
    -   ```cpp
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ```
    

# February 16, 2022 TIL

## django
- 

## redis
- [redis 설정 설명 한글](https://ozofweird.tistory.com/entry/Redis-Redis-%EC%84%A4%EC%A0%95-%ED%8C%8C%EC%9D%BC)
    - ※ 캐시 용도로만 사용한다면 RDB 파일을 저장하는 옵션인 save는 ""로 설정하는 것을 권장한다. 만약 설정을 켜야할경우 stop-write-on-bgsave-error 옵션을 꺼주어야 한다. 이 옵션이 yes일 경우 RDB 파일 저장에 실패하면 바로 Redis에 write할 수 없게된다.
    - -> 지금 서버에서 데이터가 삭제되는 원인
    
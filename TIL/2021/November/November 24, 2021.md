# November 24, 2021 TIL

# 용어
- [RxJava](https://12bme.tistory.com/570)
    - reactive Java에서 따온 말

# LiveData
- [사용법](https://dev-imaec.tistory.com/39)
    1. LiveData 정의
    1. Observer 설정
    `liveData.observe(this, Observer{})`

# app Architecture
- [jetpack guide](https://developer.android.com/jetpack/guide)
    - MVVM을 구현하기 위해 안드로이드에서는 다음 그림을 따른다.
    - <img src="https://developer.android.com/topic/libraries/architecture/images/final-architecture.png">
    - view = Activity
    - ViewModel = View Model
    - Model = Repository안의 Model
    
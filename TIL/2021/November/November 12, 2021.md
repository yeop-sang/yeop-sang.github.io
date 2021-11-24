<style>
    .caution code {
    background: var(--devsite-caution-notice-background);
    color: var(--devsite-caution-notice-color);
}
</style>
# November 12, 2021 TIL

## Android Studio

-   [Module](https://developer.android.com/studio/projects?hl=ko)

    > 모듈은 소스 파일 및 빌드 설정으로 구성된 모음이며, 이를 통해 프로젝트를 별개의 기능 단위로 분할할 수 있습니다. 프로젝트에는 하나 이상의 모듈이 포함될 수 있으며, 하나의 모듈이 다른 모듈을 종속 항목으로 사용할 수 있습니다. 각 모듈은 개별적으로 빌드, 테스트 및 디버그할 수 있습니다.

    -   종류는 총

-   [sqlite3](https://developer.android.com/training/data-storage/sqlite?hl=ko)
    <div class="caution">
      <p><b>주의:</b> 이러한 API는 강력하기는 하지만 상당히 낮은 수준이므로 다음과 같이 사용하는 데 상당한 시간과 노력이 필요합니다.</p>
      <ul>
        <li>원시 SQL 쿼리에 관한 컴파일 시간 확인이 없습니다. 따라서 데이터 그래프가 변경됨에 따라 영향을 받는 SQL 쿼리를 수동으로 업데이트해야 합니다. 이 과정은 시간이 오래 걸리고 오류가 쉽게 발생할 수 있습니다.</li>
        <li>SQL 쿼리와 데이터 객체 간에 변환하려면 많은 상용구 코드를 사용해야 합니다.</li>
      </ul>

      <p>이러한 이유 때문에 앱의 SQLite 데이터베이스에 있는 정보에 액세스하기 위한 추상화 레이어로 <a href="https://developer.android.com/training/basics/data-storage/room?hl=ko">Room 지속성 라이브러리</a>를 사용하는 것이 <strong>좋습니다</strong>.</p>
    </div>

- [Room](https://developer.android.com/training/data-storage/room?hl=ko)
    - [codelab example](https://developer.android.com/codelabs/android-room-with-a-view-kotlin?hl=ko#0)


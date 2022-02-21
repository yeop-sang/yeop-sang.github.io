# February 03, 2022 TIL

## django 개발
- [429 Error](https://developer.mozilla.org/en-US/docs/Web/HTTP/Status/429)
    - 너무 많은 요청을 보낼때 해당 에러를 띄운다
    - [retry-after](https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Retry-After)
        -   ```html
            Retry-After: <http-date>
            Retry-After: <delay-seconds>
            ```
        - 위와 같이 retry-after header에 묶어서 보내게 된다.
    - python 에서 
        ```python 
        time.sleep(
            json.loads(response.text)
                .headers.get('retry-after')
        )
        ```
        같이 sleep 함수를 이용해 해결하면 좀 쉽게 해결할 수 있다.
    - 나의 경우는 해당 exception을 생성하여 try/catch 문을 활용해 해결 중이다.
        ```python
        class TooManyRequests(Exception):
            def __init__(self, message, delay):
                super().__init__(message)
                try:
                    self.delay = float(delay)
                except ValueError:
                    self.delay = 100.

            pass
        ... 중략 ...
        try:
            response = requests(...)
            if response.status_code == 429:
                raise 
                TooManyRequests(
                    "너무 많은 요청!",
                    delay = json.loads(response.text)
                                .headers.get('retry-after')
                )
        except TooMayRequests as e:
            time.delay(e.delay)
            result = retry!
            return result;
        ```
    
- model의 fields 를 text로 뽑아내기
    ```python
    for field in model._meta.fields:
        res += '"' + field.name + '", '
    ```
    
- Admin에서 ChoiceField 표현하기
    - https://docs.djangoproject.com/en/4.0/ref/models/instances/#django.db.models.Model.get_FOO_display
    -   ```python
        class MAdmin(admin.ModelAdmin):
            list_display = ('get_status_display', )
        ```
    - 처럼 `list_disply = ('get_attribute_display',)`로 작성해 표현하자
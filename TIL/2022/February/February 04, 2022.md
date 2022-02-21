# February 04, 2022 TIL

## django
- reverse access
    - model의 attribute_set 으로 접근할 수 있다.
    -   ```python
        model
        ---
        class Device(models.Model):
            name = models.CharField(max_length=255, null=False)
        class DeviceColor(models.Model):
            target_device = models.ForeignKey(Device, on_delete=models.CASCADE)
        
        view
        ---
        device = Device.objects.get('노트10')
        device_color_list = device.devicecolor_set.all()
        ```
- [custom template tag](https://docs.djangoproject.com/en/4.0/howto/custom-template-tags/)
- 

## python
- try/catch
    - https://gomguard.tistory.com/122

## ssh
- kex_exchange_identification: read: Connection reset by peer
    - 해당 에러시 현재 접속 중인 ip가 ban 당했다는 이야기
    - 따라서 wifi 접속을 해결하자!

<%*
let postName = await tp.system.prompt("포스트 제목을 입력하세요");
if (!postName) {
    new Notice("포스트 제목이 입력되지 않아 Untitled로 생성됩니다.", 3000);
    postName = "Untitled";
}
let formattedDate = tp.date.now("YYYY-MM-DD");
let newFileName = `${formattedDate}-${postName.replace(/ /g, '-')}`; // 공백을 하이픈으로 변경
await tp.file.rename(newFileName);
%>
---
title: "<% postName %>"
date: <% tp.date.now("YYYY-MM-DDTHH:mm:ss") %>+09:00 # KST (서울) 시간대 자동 반영
categories: [Technology, NLP] # 기본 카테고리 (자유롭게 수정)
tags: [Python, Pytorch] # 기본 태그 (자유롭게 수정)
excerpt: "이 포스트는 ...에 대해 다룹니다."
math: true
toc: true
---

## 1. 서론 (Introduction)
이곳에 포스트의 주제와 다룰 내용에 대한 간략한 소개를 작성합니다. 독자가 이 글을 통해 무엇을 얻을 수 있는지 설명해주세요.

<%* tp.file.cursor() %>

---

## 2. 핵심 개념 (Core Concepts)

본문이에 앞서, 이해해야 할 핵심 개념이나 배경 지식에 대해 설명합니다.

### 2.1. 개념 1

여기에 첫 번째 핵심 개념에 대한 설명을 작성합니다.

### 2.2. 개념 2

여기에 두 번째 핵심 개념에 대한 설명을 작성합니다.

---

## 3. 구현 및 코드 (Implementation & Code)

이론을 실제 코드로 어떻게 구현했는지 보여줍니다. 코드 블록과 함께 상세한 설명을 덧붙입니다.

```python
# 예시 Python 코드
class MyModel:
    def __init__(self):
        print("모델이 생성되었습니다.")

    def forward(self, x):
        # 여기에 모델의 로직을 작성합니다.
        return x
```

---

## 4. 실험 및 결과 (Experiments & Results)

구현한 코드를 통해 어떤 실험을 진행했고, 그 결과는 어떠했는지 공유합니다. 표, 그래프, 스크린샷 등을 활용하면 좋습니다.

| 실험 설정 | 결과 |
| :--- | :--- |
| 설정 A | 결과 A |
| 설정 B | 결과 B |

$$
\text{결과를 설명하는 LaTeX 수식 예시: } E = mc^2
$$

---

## 5. 결론 및 고찰 (Conclusion & Discussion)

이번 포스트에서 다룬 내용을 요약하고, 배운 점이나 추가적으로 생각해볼 만한 점들을 정리합니다.

---

## 6. 참고 자료 (References)

- [참고 자료 1](https://example.com)
- [논문/아티클 제목](https://example.com) 
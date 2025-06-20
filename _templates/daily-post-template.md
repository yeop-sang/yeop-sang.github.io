<%*
let postName = await tp.system.prompt("포스트 제목을 입력하세요");
if (!postName) {
    // 사용자가 아무것도 입력하지 않고 취소했을 경우
    new Notice("포스트 제목이 입력되지 않아 Untitled로 생성됩니다.", 3000);
    postName = "Untitled"; // 기본값으로 Untitled를 사용하거나 다른 처리를 할 수 있어.
}
let formattedDate = tp.date.now("YYYY-MM-DD");
let newFileName = `${formattedDate}-${postName}`;
await tp.file.rename(newFileName);
tR += `# ${postName}`
%>
---
title: "<% newFileName %>"
date: <% tp.date.now("YYYY-MM-DDTHH:mm:ss") %>+09:00 # KST (서울) 시간대 자동 반영
categories: [Study, NLP] # 기본 카테고리 (자유롭게 수정)
tags: [DeepLearning] # 기본 태그 (자유롭게 수정)
excerpt: "오늘 공부한 내용의 요약입니다."
math: true
toc: true
---

## 오늘 학습한 주요 내용
<%* tp.file.cursor() %>

### 1. 개념 1
여기에 개념에 대한 설명을 작성합니다.

```python
# 코드 예시
print("여기에 Python 코드를 작성하세요.")
```

### 2. 개념 2
여기에 또 다른 개념을 설명합니다.
$$ \text{이곳에 LaTeX 수식을 작성하세요.} $$

---

## 참고 자료 및 링크

- [링크 1](https://example.com)
- [링크 2](https://example.com)

---

## 오늘의 회고

오늘 공부하면서 느낀 점이나 배운 점, 어려웠던 점을 기록합니다.


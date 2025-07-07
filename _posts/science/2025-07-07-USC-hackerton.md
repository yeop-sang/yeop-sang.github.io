---
title: USC-hackerton
date: 2025-07-07T00:11:41+09:00
categories:
  - Technology
tags:
  - Python
  - Pytorch
excerpt: 이 포스트는 ...에 대해 다룹니다.
math: true
toc: true
---

## 1. 준비 과정
USC hackerton 준비를 위한 전략

### 1. 내용 분석
[2025 IMSC Hackathon](https://imsc-hackathon-2025.github.io/pages/college-consolidated.html)
1) overview
	- **comprehensive road damage detection**
	- **four types of road damage**
		1. potholes
		2. alligator cracks
		3. longitudinal cracks
		4. transverse cracks
	- diverse dataset from country1, country2, and country3
2) mission
	1) Object Detection model that detects and localizes **all four major road damage types** in images
	2) **Input:** Road scene images
	3) **Output:** For each damage, predict its type and bounding box (class x y w h)
	4) **Focus:** Multi-class detection and localization
### 2. Dataset 준비
- 예시 데이터 셋이 아직 도착하지 않음
#### About the Dataset

The **Road Dataset** for this track includes thousands of annotated images from three countries, with four types of damage labeled:

- **Countries:** country1, country2, country3
- **Damage Types:** Pothole, Alligator Crack, Longitudinal Crack, Transverse Crack
- **Annotations:** Each image is labeled with bounding boxes and damage type

#### 우리만의 예시 데이터셋
[RDD2022](https://datasetninja.com/road-damage-detector)
[RDD2020](https://data.mendeley.com/datasets/5ty2wb6gvg/1)
[N-RDD2024](https://data.mendeley.com/datasets/27c8pwsd6v/3)


---
## 2. GPT에게 물어본 공부할 거리

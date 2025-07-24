<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=87CEFA&height=200&section=header&text=SW%20Study&fontSize=50&fontAlignY=40&fontColor=DFF6FF" />
</p>
<br>

# SW Study

- 이 레포지토리는 다양한 프로그래밍 주제에 대한 스터디 자료를 정리한 공간입니다.   
- 각 폴더별로 주제를 나누어 학습 내용을 정리하고 실습 예제를 포함하고 있습니다.

---

## 📁 Directory Structure

| 디렉토리 | 설명 |
|-|-|
| [`C`](./C) | C 언어의 기초 문법, 자료형, 제어문, 함수 등을 단계적으로 학습합니다. |
| [`OOP`](./OOP) | Java 기반의 객체지향 프로그래밍(OOP) 개념과 설계를 학습합니다. |

---

## 🎯 목표

✅ **기초 개념을 체계적으로 정리**  
✅ **실습을 통해 개념을 내재화**  
✅ **함께 성장하는 협업 기반 스터디 환경 조성**

---

## 📌 참고사항

- 각 디렉토리에는 📄 **학습 자료**와 🧠 **문제 풀이 예제**가 포함되어 있습니다.  
- **매주 금요일** 꾸준히 업데이트될 예정입니다. ✍️

---

## 🔧 문제 업로드 방법

### 1. 레포지토리 생성

    - **이 레포지토리를 포크합니다.**  
      👉 [이 레포지토리를 포크하려면 여기를 클릭하세요.](https://github.com/daewan1120/SW-Study/fork)
    - 포크한 본인 계정의 레포지토리를 로컬에 클론합니다.

```bash
git clone https://github.com/[username]/SW-Study
cd SW-Study
```

---

### 2. 브랜치 생성
- 작업용 브랜치를 생성합니다.  
브랜치 이름은 다음 형식을 따릅니다:

```
[닉네임]/[문제번호]
```

ex)

```bash
git checkout -b daewan/1001
```

- 문제 풀이 후 파일을 추가하고 커밋합니다:

```bash
git add .
git commit -m "feat: Add 1001 problem solution in C"
```

- 작업한 브랜치를 원격 저장소에 푸시합니다:

```bash
git push origin daewan/1001
```

---

### 3. PR(Pull Request)

- GitHub 웹사이트로 이동하여 **새 Pull Request**를 생성합니다.
- PR 제목 예시:

    ```
    [daewan] 1001번 문제 풀이 제출
    ```

- 베이스 브랜치는 `main`, 비교 브랜치는 `[닉네임]/[문제번호]` 브랜치입니다.

---

✅ **주의사항**
- 하나의 문제는 하나의 PR로 제출하는 것을 권장합니다.
- 커밋 메시지 컨벤션: `feat:`, `fix:`, `docs:` 등의 형식을 지키기를 권장합니다.
# cpp-week3-bigint

>  c++ 프로그래밍 3주차 과제

# 📖 Description

c++ 프로그래밍 3주차 과제입니다. 

string을 활용한 큰 수 계산기 프로그램 제작

## 🕰️ 개발 기간
* 24.03.21일 - 24.03.27일


## 💻 Getting Started

### 실방 방법
* bigint
```
$ git clone https://github.com/yuhano/cpp-week3-bigint.git bigint
$ cd bigint
$ g++ -Werror -c *.cpp
$ g++ -o main.exe *.o
$ .\main.exe
```

## 🔧 Stack
- **Language**: c++ 

##  Project Structure

```markdown
cpp-week3
└── bigint
    ├── bigAdd.cpp // 큰 숫자 더하기
    ├── bigMinus.cpp // 큰 숫자 빼기
    ├── main.cpp // 사용자 입력 및 출력 담당
    └── tool.cpp // 더하기, 빼기 과정에서 공통적으로 필요한 유틸
```
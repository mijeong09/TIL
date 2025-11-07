# 객체 지향 프로그래밍(OOP)

### 왜 클래스가 필요할까?
- 동일한 로직이 반복될 경우 코드가 중복된다 -> 불편
- Main 클래스가 복잡해진다

## 클래스
> 객체의 **속성(데이터)** 과 **기능(동작)** 을 **새로운 타입으로 정의**한 설계도

- 필드 = 속성 = 데이터
- 메서드 = 기능 = 동작

### 클래스 문법

```java
public class 클래스명 {
  // 필드(속성) - 객체의 데이터를 저장하는 변수 (name 등)
  데이터타입 변수명(필드명);

  // 생성자 - 객체를 초기화하는 메서드
  public 클래스명(매개변수) {}

  // 메서드(기능) - 객체의 동작을 정의 (면적 계산)
  public 반환타입 메서드명(매개변수) {}
}
```
#### 생성자

- 클래스명 == 메서드명
- 반환 타입 X
- 객체 생성 시 자동 호출된다

---
## 객체(Object)
> 클래스라는 설계도를 바탕으로 메모리에 `실체화된 존재`

### 객체 생성 문법
```java
클래스명 변수명 = new 클래스명(인자);
```
#### `new` 키워드
1. 메모리에 객체 생성 위한 공간 할당
2. 생성자 호출하며 객체 초기화
3. 객체의 **참조** 반환

!! 기본형타입이 아닌 모든 타입은 참조형이다.
(정수, 실수, 문자(char), 논리)

#### `this` 키워드
: 현재 객체 자신을 참조하는 키워드

```java
public class Person {
    int age;

    // 매개변수명과 필드명이 같을 때
    public Person(int age) {
        this.age = age;  // this.age는 필드, aeg는 매개변수
    }
}
```

## 클래스는 타입이다 !!
> **중요**: 결국 클래스는 새로운 **데이터 타입**을 정의하는 것.

---

## 메서드
메서드는 특정 작업을 수행하는 코드 블록이다.

```java
접근제어자 반환타입 메서드명(매개변수) {
  return 반환값; // void는 반환값이 X
}

public int method(int a) { 
  return a + 1 };
```

### 참조형 매개변수 (참조 전달)

- 기본형을 제외한 모든 것은 참조형이다. 클래스 또한 **참조형 타입** 이다.
따라서, 데이터의 주소가 같기 때문에 값 변경시 같이 변경된다.

---

## 오버로딩(Overloading)
> 같은 이름의 생정자나 메서드를 **매개변수를 다르게**하여 여러개 정의하는 것

### 생성자 오버로딩

#### this()로 생성자 연결

```java
public Person() {
  this(name, age);  // 생성자의 첫줄에 있어야함
  this.address = address;
}

public Person(String name, int age) {
  this.name = name;
  this.age = age;
}
```
코드 중복 제거와 유지보수에 용이하다.

### 메서드 오버로딩
#### 불가능한 조건
```java
int add(int a, int b) {return;}

// 반환 타입만 다른 경우 (매개변수 타입이면 OK)
// double add(int a, int b) {return;}

// 매개변수명만 다른 경우
// int add(int x, int y) {return;}

```

### 가변 인자(Varargs)

- `int(데이터 타입)... numbers(변수명)`

**활용 예제**

```java
String concat(String separator, String... strings) {
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < strings.length; i++) {
            result.append(strings[i]);
            if (i < strings.length - 1) {
                result.append(separator); // 구분자 역할
            }
        }
        return result.toString();
  }
```

## static 메서드 (정적 메서드)
- 객체 생성 없이 클래스명으로 직접 호출할 수 있다
- **인스턴스 변수나 메서드에 접근 불가** (객체가 없으니까)
- this 키워드 사용 X (현재 객체 자신을 가리키는 참조 변수니까)
- 공통된 기능이나 유틸리티 기능(객체의 상태와 상관없이 쓰이는)에 자주 사용

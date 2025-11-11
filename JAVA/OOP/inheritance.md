# 상속(Inheritance)

```java
public class Parent {}

public class Child extends Parent {}

```

### `extends` 키워드
- **"확장하다"** 라는 뜻에 집중하면 더 이해하기 쉽다.
- 기존 기능에 더해 자식 클래스에서 기능을 확장한다는 의미

## 상속 규칙

1. 단일 상속만 가능 -> 인터페이스 사용

2. 생성자와 초기화 블록은 상속되지 X (상속되는 것: 필드, 메서드)
    
```java
class Parent {
  int a = 10;   // 멤버 변수(필드) - 상속 O

  { /* 인스턴스 초기화 블록 - 상속 X */ }

  public Parent() {}  // 생성자 - 상속 X
}
```

- 생성자가 상속된다면? 생성자는 class명과 같아야하는데 문법적으로 맞지 않음
- 초기화 블록은 객체 생성 할 때만 실행되는 초기화 절차일 뿐

3. private 멤버는 상속은 되지만 접근 X

- getter/setter 통해서 접근

---

### `super()`
자식 클래스에서 부모 클래스의 **생성자 호출**

- `super` : 부모 인스턴스에 대한 **참조** 변수
- `thils` : 인스턴스 자신에 대한 참조 변수
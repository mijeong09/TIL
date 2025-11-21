# 인터페이스 (Interface)
> **기능 명세서** 역할을 하는 추상 타입

- 다중 구현이 가능해서 Java의 단일 상속 제한을 보안해준다

```java
public interface 인터페이스명 {
    // 상수 (public static final 자동 적용)
    int MAX_VALUE = 100;

    // 추상 메서드 (public abstract 자동 적용)
    void method1();
    void method2(int param);
}
```

인터페이스는 “외부에서 반드시 접근할 수 있는 약속된 메서드 집합”이라,
그 약속을 깨지 않으려면 구현체도 public으로 공개해야 한다.
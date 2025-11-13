# 추상화 (Abstraction)

## 추상 클래스
- 완성되지 않은 클래스로 **명세**만 제공
- 하위 클래스가 추상 메서드를 반드시 구현하도록 강제
- 인스턴스 생성 불가 (설계도가 미완성 상태니까)

### 추상 클래스 상속
추상 클래스를 상속받는 자식 클래스는
  1. 모든 추상 메서드를 구현하거나
  2. 자신도 추상 클래스가 되어야 한다

## 템플릿 메서드 패턴
알고리즘의 골격을 정의하고, 일부 단계를 하위 클래스에서 구현하도록 하는 디자인 패턴

```java
// 템플릿 메서드 (final로 오버라이딩 방지)
public final void process() {
        readData();
        processData();
        writeData();
    }
// 추상 메서드: 하위 클래스에서 구현
abstract void readData();
abstract void processData();
abstract void writeData();
```
- 템플릿 메서드를 사용하면서 프로세스를 만들어 줄 수 있다.
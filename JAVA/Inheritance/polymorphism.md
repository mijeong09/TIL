# 다형성(Polymorphism)
상위 타입의 참조 변수로 하위 타입의 객체들을 참조할 수 있는 특성
- Poly (여러) + Morph (형태) = "여러 가지 형태를 가지는 성질"

```java
class Animal {
    void makeSound() {}
}

class Dog extends Animal {  // Animal 상속
    @Override
    void makeSound() {
        System.out.println("멍멍!");
    }
}

// main()

// 하위 타입 변수에 할당 (일반적인 방법)
Dog dog = new Dog

// 상위 타입 변수에 할당 (다형성)
Animal animal1 = new Dog();

animal1.makeSound();  // 객체의 실제 타입에 따라 실행되는 메서드 결정
```


```java
public class WithPolymorphism {
    public static void main(String[] args) {
        Animal dog = new Dog();
        Animal cat = new Cat();
        Animal bird = new Bird();

        feedAnimal(dog);
        feedAnimal(cat);
        feedAnimal(bird);
    }

    // 하나의 메서드로 모든 동물 처리
    static void feedAnimal(Animal animal) {
        System.out.println("동물에게 먹이를 줍니다.");
        animal.eat();  // 실제 타입에 따라 다르게 동작
    }
}
```

---

# 업 / 다운캐스팅 (UP / Downcasting)

```java
Animal animal = new Dog();  // 업캐스팅
Dog dog = (Dog) animal;     // 다운캐스팅
```

- **업캐스팅** : 하위 타입의 객체를 상위 타입으로 참조하는 것
  - 자동 형변환
  - **하위 타입의 고유 멤버는 접근 X**

- **다운캐스팅** : 업캐스팅 된 객체를 다시 하위 타입으로 변환
  - **명시적 형변환 필요**

---

## `instanceof` 연산자

객체가 특정 타입인지 확인하며, `boolean`값을 반환
- `객체 instanceof 타입`

**상속 계층 확인**
- 상위 타입도 `true`, 실제 객체 타입보다 하위 타입은 `false`

---

# 동적 바인딩

바인딩은 메서드 호출과 실제 실행될 메서드를 연결하는 과정

---
| 구분 | 정적 바인딩 | 동적 바인딩 |
|------|--------------|--------------|
| 시점 | 컴파일 타임 | 런타임 |
| 대상 | 오버로딩된 메서드, 필드 | 오버라이딩된 메서드 |
| 결정 기준 | 참조 타입 기준 | 실제 객체 타입 기준 |
| 성능 | 빠름 | 상대적으로 느림 |
---

```java
Animal animals = new Dog();

// 컴파일 시점: Animal.makeSound() 호출 계획
// 런타임 시점: 실제 객체의 makeSound() 실행 (동적 바인딩)
animal.makeSound();
```
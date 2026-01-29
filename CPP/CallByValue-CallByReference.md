# Call by Value vs Call by Reference
> 함수 호출 시 인수 전달 방식의 차이

---

### 포인터
> 메모리 주소를 저장하는 변수

- `&` : 주소를 가져옴
- `*` : 주소로 가서 값을 가져옴


#### 인자가 배열인 경우

``` cpp
void Func(int *a)

void main() {
  Func(arr);  // 함수로 전달될 때 자동으로 포인터로 변환됨
}
```

잘못된 코드
- `void Func(int &a)` : int 하나만 참조하겠다는 뜻

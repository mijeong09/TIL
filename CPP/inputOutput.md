# 입출력 I/O

## 입력
```cpp
#include <bits/stdc++.h>
using namespace std;
int a;
int main() {
  cin >> a;
  scanf("%d", &a);
  return 0;
}
```

`cin` : 개행문자 직전까지 입력을 받는다.

`int scanf (const char * format, ...)`

`getline`

### 입력 시 주의할 점

```cpp
int T;
string s;

cin >> T;
string bufferflush;
getline(cin, bufferflush);  // 버퍼에 남아있는 개행문자를 처리하기 위함
for(int i = 0; i < T; i++) 
{
  getline(cin, s);
  count << s << "\n";
}
```
  `cin` 과 `getline`의 차이점
  
  - `cin` : 구분자를 만나면 입력을 종료하고, `\n`을 버퍼에 남김
  - `getline`: `\n`전까지 읽고, `\n`은 버퍼에서 제거

## 출력

### printf 주의할 점

``` cpp
string str = "asdf"

printf("string : %s", str.c_str());
```

- `printf`로 문자열을 출력하려면 `string`을 포인터(`char *`) 타입으로 바꿔줘야함






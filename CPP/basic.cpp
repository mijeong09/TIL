// <bits/stdc++.h> : c++ 의 모든 표준 라이브러리가 포함된 헤더파일
// 헤더파일을 프로그램에 include
#include <bits/stdc++.h>

// std라는 namespace를 기본으로 설정 (std::cin -> cin (O))
// 라이브러리가 많을 경우 일어나는 변수명 중복 방지를 위해 범위를 걸어 놓음
using namespace std;

string a, b;

// typedef <타입> <별칭>
typedef int i;

// define <이름> <값>
#define PI 3.14159
#define loop(x, n) for (int x = 0; x < n; x++)

// 프로그램 실행시 main() 먼저 찾고 실행
int main() {

  // cin >> a;
  // cout << a << '\n';

  // i a = 1;
  // cout << a << '\n';

  // cout << PI << '\n';
  
  // int sum = 0;
  // loop(i, 10) {
  //   sum += i;
  // }
  // cout << sum << '\n';

  // input
  cin >> a >> b;
  cout << a << "\n";
  cout << b << "\n";

  int a;
  double b;
  char c;

  scanf("%d %lf %c", &a, &b, &c);
  printf("%d\n", a);
  printf("%lf\n", b);
  printf("%c\n", c);

  // 함수 종료
  return 0;
}
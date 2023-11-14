# PrintInput

### 출력

`std::cout << "string";`을 사용해 출력한다. 사용편의성을 위해 `using namespace std;`를 입력하여 std:: 구문을 생략할 수 있다. 또한 문자열 출력 끝에는 endl을 입력해주어야 불필요한 출력을 방지할 수 있다.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "환영합니다." << endl;
    return 0;
}
```

### 입력

입력은 `cin >> test;`구문을 통해 정의된 변수에 입력값을 기입한다. 앞서 출력과 마찬가지로 std에 속해있으나 생략가능하다. 다시 말해 출력한 cout이고 입력은 cin이다.

```cpp
#include <iostream>
using namespace std;

int main() {
    string test;
    cin >> test;
    cout << test
    return 0;
}
```
# Standard I/O
### 解説
char型で変数を宣言し、scanfで値を入力します。
その後、printfで出力します。

### 実装例
```c
#include <stdio.h>

int main(void) {
    char s[100];
    scanf("%s", s);
    printf("%s\n", s);
    return 0;
}
```

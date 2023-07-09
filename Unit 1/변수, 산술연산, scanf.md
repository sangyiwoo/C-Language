A+B
```
#include <stdio.h>
int main(void)
{
    int A, B; //정수형 변수 A와 B 선언
    
    scanf("%d %d", &A, &B); //2개의 정수를 받아서 A와 B에 저장됨
    printf("%d" , A+B); //A+B값을 10진수 형태로 출력
    return 0;
}
```
A-B
```
#include <stdio.h>
int main(void)
{
    int A, B; //정수형 변수 A와 B 선언
    scanf("%d %d", &A, &B); //2개의 정수를 받아서 A와 B에 저장됨
    printf("%d", A-B); //A-B값을 10진수 형태로 출력
    return 0;
}
```
A×B
```
#include <stdio.h>
int main(void)
{
    int A, B; //정수형 변수 A와 B 선언
    scanf("%d %d", &A, &B); //2개의 정수를 받아서 A와 B에 저장됨
    printf("%d", A*B); //A*B값 10진수 형태로 출력
    return 0;
}
```
A/B
```
#include <stdio.h>
int main(void)
{
    double A, B; // double형 실수 A와 B 선언
    scanf("%lf %lf", &A, &B); //double형 실수 2개를 A와 B에 저장
    printf("%.10f", A/B); //A/B값을 소수점 이하 자릿수가 10인 실수로 출력
    return 0;
}
```

## 변수
* 형식과 자료형은 반드시 일치해야함
* 사용되기 전에 선언해야함
* 변수 이름은 숫자로 시작, 기호 사용, 키워드 사용이 불가


표준자료형||    .
--|--|-
정수형| 실수형 | 문자형
short|float|char
int|double
long|long double
long long
> ###### double형은 float형보다 더 많은 비트를 사용하여 실수 저장

형식지정자 | 의미
---|----
%d | 10진 정수
%f | float형 실수
%lf | double형 실수
%c | 하나의 문자
%s | 문자열


## 산술연산
연산|연산자
-|-
덧셈|+
뺄셈|-
나눗셈|/
나머지|%

## scanf
* 입력된 데이터를 지정된 형식으로 변환하여 변수에 저장함
* 입력을 받을 변수의 주소 앞에는 & 기호가 있어야함
  >###### 변수 앞에 &를 붙이면 변수의 주소를 의미

## 필드폭
* printf()를 사용해 출력할때 출력되는 데이터의 필드 크기를 지정할 수 있음
  ex) %10.3은 전체 필드폭은 10이고 그중 소수점 이하 자릿수가 3임
  >###### 필드폭을 지정하지 않고 .3으로 소수점 이하 자리수만 지정할 수도 있다
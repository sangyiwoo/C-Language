/* 입력받은 문자열에 대하여 역순으로 된 문자열을 만들어서 출력하시오.(원본 문자열은 변경하지 말고, 역순으로 된 문자열을 새로 만드시오.)
*/

#include <stdio.h> //입출력 함수에 대한 정보를 가지고 있는 헤더파일 포함
#include <string.h> //

int main(void)
{
    char str[256]; //크기가 256인 문자열 str 선언
    char reverse[256]; //크기가 256인 문자열 reverse 선언
    int i, len; //정수형 변수 i, len 선언

    printf("문자열을 입력하세요 : "); //출력
    gets(str); //빈칸을 포함한 한 줄의 문자열 str에 입력받음

    len = strlen(str); //정수형 변수 len에 문자열 str의 길이 저장
    for(i=0;i<len;i++) //i가 len의 길이보다 작을때까지 반복
        reverse[i] = str[len-i-1]; //i번 문자열에 'len-i-1'번 str 문자열을 저장
    reverse[i] = '\0'; //마지막 문자열에 널문자 저장
    //널(null) 문자는 문자열을 표현할때는 문자열의 끝을 의미

    printf("역순으로된 문자열 : %s\n", reverse); //문자열 reverse 출력

    return 0;
}
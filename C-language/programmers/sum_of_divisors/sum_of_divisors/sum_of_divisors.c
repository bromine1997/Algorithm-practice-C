/*


문제 설명
자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요. 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.

제한 조건
n은 10,000,000,000이하인 자연수입니다.


내 생각 
1. 자릿수 개수를 먼저 세고 그 다음 배열 동적 할 당 그다음 숫자를 하나씩 넣으려고 했음

문제점 : malloc 의 사용법 


    while (temp > 0) {
        i++;
        temp /= 10;
    } ==> 자릿수를 세는 방법??? 이게 최선인가? 


    뒤집힌 결과가 필요한 숫자 문제는 역시 %10, /10 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {

    long long temp = 0;
    int i = 0;
    temp = n;

    while (temp > 0) {
        i++;
        temp /= 10;
    }

    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(i * sizeof(int));

    for (int j = 0; j < i; j++) {

        answer[j] = n % 10;
        n = n / 10;
    }

    return answer;
}

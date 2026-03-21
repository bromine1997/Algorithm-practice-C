/*
자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요. 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.

제한 조건
n은 10,000,000,000이하인 자연수입니다.



malloc(n)을 써서 바이트 수와 원소 개수를 혼동 !! 
.

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
/*
문제 설명
양의 정수 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어져야 합니다. 
예를 들어 18의 자릿수 합은 1+8=9이고, 18은 9로 나누어 떨어지므로 18은 하샤드 수입니다. 
자연수 x를 입력받아 x가 하샤드 수인지 아닌지 검사하는 함수, solution을 완성해주세요.

제한 조건
x는 1 이상, 10000 이하인 정수입니다.


 문제 풀 때 내 생각: 자릿수를 하나하나 꺼내서 합한 뒤 원래 수를 나눠보려고 했음 .. 하지만 자릿수의 합을 어떻게 구할까? 이 고민이 더 이뤄저야했음


  while (temp > 0) {

        H_sum += temp % 10;
        temp /= 10;

    }

    이 방법을 하면 temp의 모든 자릿수의 합을 구할 수 있음  % 10, /= 10 이 각 자릿수를 구할때 핵심 연산임을 기억할 것..

*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int H_sum = 0;
    int  temp = 0;

    temp = x;

    while (temp > 0) {

        H_sum += temp % 10;
        temp /= 10;

    }

    if (x % H_sum == 0) return answer;
    else return false;

}
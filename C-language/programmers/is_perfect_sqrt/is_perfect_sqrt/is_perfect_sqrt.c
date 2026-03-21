/*
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>


// // 일단 제곱근을 찾는게 핵심 어떻게 제곱근을 찾을건지 

// // 제곱근을 어떻게 빠르게 찾을까? ..

// //일반적으로 절반 이하에서 탐색하면 될 것 같음
 
// // 
// long long solution(long long n) {
//     long long answer= 0;
//     long long left = 1;
//     long long right = n/2;
//     long long mid = 0;

//     if ( n == 1 ) return 4;

//     while (left <= right) {
//         mid = (left + right) / 2;

//         if (mid * mid == n){
//             answer = (mid +1)*(mid +1);
//             return answer;
//         } 
//         else if (mid * mid < n) left = mid + 1;
//         else right = mid - 1;

//     }

//     return -1;
// }


이분탐색 알고리즘을 사용해서 조금 더 빨리 탐색하는 방법이 있음 

이분 탐색은 left = 1 , right = n 으로 놓고 mid = (left+ right )/ 2

left가 right보다 작거나 같을때까지 내가 찾는 수가 나올때까지 반복 , 내가 찾는수를 X라 했을때 X가 mid보다 크다?  그럼 left 를 mid +1 , X가 mid보다 작다? 그럼 right를 mid -1으로 찾는 방법
 

 정렬된 값의 범위 안에서 어떤 답을 찾는다 ==? 이분  탐색을 고려해볼 것
 경계값도 항상 고려 할 것. n ==1 일떄!!  항상 모든 문제를 풀때 경계값 반드시 생각할것
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long left = 1;
    long long right = n / 2;
    long long mid;

    if (n == 1) return 4;

    while (left <= right) {
        mid = (left + right) / 2;

        if (mid == n / mid && n % mid == 0) {
            return (mid + 1) * (mid + 1);
        }
        else if (mid < n / mid) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}
function solution(x, n) {
    var answer = [];
    let number = x;
    for(let i = 0; i<n; i++){
         answer[i] = number;
        number += x;
    }

    return answer;
}
function solution(n) {
    let answer= [];
    let number = String(n);
    for(let i = 0; i<number.length; i++){
        answer[i] = number[i];
    }
    answer.sort((a, b) => b-a);
    let result = '';
    for(let i = 0; i<number.length; i++){
        result += answer[i];
    }
    
    return Number(result);
}
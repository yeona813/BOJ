function solution(money) {
    var answer = [];
    let max = Math.floor(money / 5500);
    answer.push(max);
    answer.push(money - max*5500);
    
    return answer;
}
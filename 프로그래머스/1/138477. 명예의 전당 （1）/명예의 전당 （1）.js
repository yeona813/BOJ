function solution(k, score) {
    var answer = [];
    let array = [];
    for(let i = 0; i<score.length; i++){
        array.push(score[i]);
        array.sort((a, b) => a-b);
        if(array.length > k){
            array.shift();
        }
        answer.push(array[0]);
    }
    return answer;
}
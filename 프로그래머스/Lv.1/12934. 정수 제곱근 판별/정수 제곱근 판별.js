function solution(n) {
    var answer = 0;
    answer = Math.sqrt(n);
    
    if(answer % 1 === 0){
        answer = Math.pow(answer+1, 2);
    }
    else{
        answer = -1;
    }
    return answer;
}
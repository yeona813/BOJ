function solution(n) {
    let length = n.toString(2).replaceAll(0, '').length;
    let answer = n+1;
    while(n < answer){
        if(answer.toString(2).replaceAll(0, '').length === length)
            break;
        answer++;
        
    }
 
    return answer;
}
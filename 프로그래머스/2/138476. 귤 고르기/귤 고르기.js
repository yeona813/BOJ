function solution(k, tangerine) {
    var answer = 0;
    let count = new Array(Math.max(...tangerine)+1).fill(0);
    for(let i = 0; i<tangerine.length; i++){
        count[tangerine[i]]++;
    }
    count.sort((a, b) => b-a);
    for(let i = 0; i<count.length; i++){
        k -= count[i];
        answer++;
        if(k <= 0){
            break;
        }
    }
    return answer;
}
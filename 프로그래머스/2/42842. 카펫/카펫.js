function solution(brown, yellow) {
    var answer = [];
    let total = brown + yellow;
    
    for(let y = 3; y<=total; y++){
        let x = Math.floor(total/y);
        if(((x-2)*(y-2)) === yellow){
            answer[0] = x;
            answer[1] = y;
            break;
        }
    }
    return answer;
}
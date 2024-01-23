function solution(t, p) {
    var answer = 0;
    let length = p.length;
    for(let i = 0; i<=t.length-length; i++){
        let word = '';
        word = t.slice(i, length+i);
        if(word <= p){
            answer++;
        }
    }
    return answer;
}
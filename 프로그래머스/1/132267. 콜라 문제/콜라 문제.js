function solution(a, b, n) {
    var answer = 0;
    while(n >= a){
        answer += b*Math.floor(n/a);
        n = b*Math.floor(n/a) + n%a;
    }
    return answer;
}
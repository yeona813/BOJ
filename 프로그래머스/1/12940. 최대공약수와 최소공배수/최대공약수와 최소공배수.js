function solution(n, m) {
    var answer = [];
    answer[0] = gcd(n, m);
    answer[1] = n*m/gcd(n, m);
    return answer;
}

function gcd(a, b){
    let r = 0;
    while(b !== 0){
        r = a % b;
        a = b;
        b = r; 
    }
    return a;
}
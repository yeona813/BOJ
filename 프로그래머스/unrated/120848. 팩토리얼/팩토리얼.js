function solution(n) {
    var answer = 0;
    let i = 1;
    let j = 1;
    while(true){
        j*=i;
        if(j > n){
            break;
        }
        i++;
    }
    return i-1;
}
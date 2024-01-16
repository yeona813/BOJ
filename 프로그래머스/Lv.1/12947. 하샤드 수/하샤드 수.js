function solution(x) {
    var answer = true;
    let string = String(x);
    let number = 0;
    for(let i = 0; i<string.length; i++){
        number += Number(string[i]);
    }
    
    if(x % number === 0){
        answer = true;
    }
    else{
        answer = false;
    }
    return answer;
}
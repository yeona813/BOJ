function solution(s){
    var answer = true;
    let countp = 0;
    let county = 0;
    s = s.toLowerCase()
    for(let i = 0; i<s.length; i++){
        if(s[i] === 'p'){
            countp++;
        }
        else if(s[i] === 'y'){
            county++;
        }
    }
    
    if(countp === county){
        answer = true;
    }
    else{
        answer = false;
    }
    return answer;
}
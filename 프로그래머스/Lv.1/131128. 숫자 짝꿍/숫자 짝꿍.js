function solution(X, Y) {
    let answer = [];
    let checkx = new Array(10).fill(0);
    let checky = new Array(10).fill(0);
    let common = 0;
    for(let i = 0; i<X.length; i++){
        checkx[X[i]]++;
    }
    for(let i = 0; i<Y.length; i++){
        checky[Y[i]]++;
    }
    for(let i = 9; i>=0; i--){
        if(checkx[i] >0 && checky[i] >0){
            common = Math.min(checkx[i], checky[i]);
            answer.push(String(i).repeat(common));
        }
    }
    
    answer = answer.join('');
    
    if(answer === ''){
        return "-1";
    }
    else if(answer[0] == 0){
        return "0";
    }

    return answer;
}
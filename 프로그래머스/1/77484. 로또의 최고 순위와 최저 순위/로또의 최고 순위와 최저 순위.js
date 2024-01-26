function solution(lottos, win_nums) {
    var answer = [];
    let count = 0;
    let change = 0;
    for(let i = 0; i<win_nums.length; i++){
        if(lottos.includes(win_nums[i])){
            count++;
        }   
    }
    for(let i = 0; i<lottos.length; i++){
        if(lottos[i] === 0){
            change++;
        }
    }
    let lowRank = score(count);
    let highRank = score(count+change);
    answer = [highRank, lowRank];
    return answer;
}

function score(number){
    let rank = 0;
    switch(number){
        case 6 : 
            rank = 1;
            break;
        case 5 : 
            rank = 2;
            break;
        case 4 : 
            rank = 3;
            break;
        case 3 : 
            rank = 4;
            break;
        case 2 :
            rank = 5;
            break;
        default :
            rank = 6;
    }
    return rank;
}
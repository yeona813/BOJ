function solution(food) {
    let half = '';
    let answer = '';
    for(let i = 1; i<food.length; i++){
        let count = Math.floor(food[i]/2);
        for(let j = 0; j<count; j++){
            half+=i;
        }
    }
    let rehalf = '';
    for(let i = half.length-1; i >=0; i--){
        rehalf += half[i];
    }
    answer = half + 0 + rehalf;
    return answer;
}
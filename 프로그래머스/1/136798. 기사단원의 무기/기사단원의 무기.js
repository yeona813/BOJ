function solution(number, limit, power) {
    var answer = 0;
    let array = [];
    for(let i = 1; i<=number; i++){
        array[i-1] = divisor(i);
        if(array[i-1] > limit){
            array[i-1] = power;
        }
        answer += array[i-1]
    }
    return answer;
}

function divisor(number){
    let count = 0;
    for(let i = 1; i*i <= number; i++){
        if(number % i === 0){
            count++;
            if(i*i < number){
                count++;
            }
        }
    }
    return count;
}
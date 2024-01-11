function solution(number, limit, power) {
    var answer = 0;
    for(let i = 1; i<=number; i++){
        let divisors = divisor(i);
        if(divisors > limit){
            divisors = power;
        }
        answer += divisors
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
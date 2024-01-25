function solution(numbers) {
    let answer = [];
    for(let i = 0; i<numbers.length; i++){
       for(let j =i+1; j<numbers.length; j++){
           let number = numbers[i] + numbers[j];
           if(!answer.includes(number)){
               answer.push(number);
           } 
           answer.sort((a,b)=>a-b);
       }
    }
    return answer;
}
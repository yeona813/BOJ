function solution(k, m, score) {
    var answer = 0;
    score.sort();
    score.reverse();
    for(let i = m-1; i<score.length; i+=m){
        answer += score[i]*m;
    }
    
  return answer;
}
function solution(s) {
    let stack = [];//괄호를 스택에 담아 올바른 괄호인지 확인
    let answer = 0;//결과값 출력
    let correct = 1;
    if(s.length % 2 === 1) return 0;//문자열이 홀수라면 올바른 괄호일 수가 없음
    
    for(let i = 0; i<s.length; i++){
        let string = s.slice(i) + s.slice(0, i);
        correct = 1;
        for(let word of string){
            if(word === '(' || word === '[' || word === '{') stack.push(word);
            else{
                let left = stack.pop();
                if(word === ')' && left === '(') continue;
                if(word === ']' && left === '[') continue;
                if(word === '}' && left === '{') continue;
                correct = 0;
                break;
            }
        }
        if(correct) answer++;
    }
    
    return answer;
}
function solution(s){
    let stack = [];
    let flag = true;
    s = s.split('');
    if(s.length % 2 === 1) return false;
    for(let i = 0; i<s.length; i++){
        if(s[i] === '('){
            stack.push(s[i]);
        }
        else{
            let left = stack.pop()
            if(s[i] === ')' && left === '(') continue;
            flag = false;
            break;
        }
    }
    
    if(stack.length !== 0){
        flag = false;
    }
    
    return flag;
}
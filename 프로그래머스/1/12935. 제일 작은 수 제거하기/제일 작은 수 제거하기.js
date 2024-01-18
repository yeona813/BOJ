function solution(arr) {
    let answer = [];
    if(arr.length === 1){
        answer[0] = -1;
    }
    else{
        let min = Math.min(...arr);
        let index = arr.indexOf(min);
        arr.splice(index, 1);
        answer = arr;
    }
    
    return answer;
}
function solution(s) {
    let array = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven','eight', 'nine'];
    let answer = 0;
    for(let i = 0; i<array.length; i++){
        let word = s.split(array[i]);
        s = word.join(i);
    }
    answer = Number(s);
    return answer;
}
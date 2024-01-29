function solution(s) {
    let array = s.split(' ');
    for(let i = 0; i<array.length; i++){
        array[i] = Number(array[i]);
    }
    let max = Math.max(...array);
    let min = Math.min(...array);
    let result = '';
    result = `${min} ${max}`;
    return result;
}
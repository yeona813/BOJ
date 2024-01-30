function solution(s) {
    var answer = [];
    let removeZero = 0;
    let count = 0;
    
    while (s !== '1') {
        let beforeLength = s.length;
        s = s.replace(/0/gi,'');
        let afterLength = s.length;
        removeZero += beforeLength - afterLength;
        count++;
        s = afterLength.toString(2);
    }

    return [count, removeZero];
}

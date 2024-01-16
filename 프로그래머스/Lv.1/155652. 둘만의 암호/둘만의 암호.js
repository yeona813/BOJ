function solution(s, skip, index) {
    let arr = Array.from({ length: 26 }, (v, i) => String.fromCharCode(i + 97));

    for (let i = 0; i < skip.length; i++) {
        const char = skip[i].toLowerCase();
        const number = arr.indexOf(char);
        if (number !== -1) {
            arr.splice(number, 1);
        }
    }

    let answer = '';
    let currentIndex = index;

    for (let i = 0; i < s.length; i++) {
        const char = s[i];
        const num = arr.indexOf(char.toLowerCase()); 
        const newIndex = (currentIndex + num) % (26-skip.length);
        answer += arr[newIndex];
    }

    return answer;
}


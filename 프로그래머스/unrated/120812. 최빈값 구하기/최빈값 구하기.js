function solution(array) {
    let counts = {};

    // 배열을 순회하며 각 값의 등장 횟수를 계산
    for (let i = 0; i < array.length; i++) {
        let num = array[i];
        counts[num] = (counts[num] || 0) + 1;
    }

    // 등장 횟수가 가장 높은 값을 찾음
    let mode;
    let maxCount = 0;

    for (let num in counts) {
        if (counts[num] > maxCount) {
            maxCount = counts[num];
            mode = num;
        }
    }

    // 최빈값이 여러 개인지 확인하고 -1을 반환
    let modeCount = 0;
    for (let num in counts) {
        if (counts[num] === maxCount) {
            modeCount++;
        }
    }

    return modeCount > 1 ? -1 : Number(mode);
}
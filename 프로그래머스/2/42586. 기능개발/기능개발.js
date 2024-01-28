function solution(progresses, speeds) {
    let answer = [];
    let count = 0; //배포 가능한 작업의 수 
    let index = 0; //배열 반복할 인덱스
    let day = 1; // 배포가 걸리는 시간 
    
    while (index < progresses.length) {
        if (progresses[index] + (speeds[index] * day) >= 100) {
            index++;
            count++;
        } else {
            if (count !== 0) {
                answer.push(count);
            }
            
            day++;
            count = 0;
        }
    }
    
    answer.push(count);
    
    return answer;
}
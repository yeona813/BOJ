function solution(a, b) {
    var answer = '';
    let cal = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let week = ['FRI', 'SAT', 'SUN', 'MON', 'TUE', 'WED', 'THU'];
    let day = 0;
    for(i = 0; i<a-1; i++){
        day += cal[i];
    }
    day += b;
    answer = week[(day-1) % 7];
    return answer;
}
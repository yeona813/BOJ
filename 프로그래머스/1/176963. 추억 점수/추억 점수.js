function solution(name, yearning, photo) {
    let answer = []
    let score = 0;
    
    photo.map((array) => {
        score = 0;
        name.map((e, index) => {
            if(array.includes(e)){
                score += yearning[index];
            }
            else {
                score += 0;
            }
        })
        answer.push(score);
    })
    return answer
}
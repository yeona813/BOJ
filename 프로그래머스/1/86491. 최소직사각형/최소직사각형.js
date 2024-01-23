function solution(sizes) {
    var answer = 0;
    for(let i = 0; i<sizes.length; i++){
        if(sizes[i][0] < sizes[i][1]){
            let temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
    let width = sizes[0][0];
    let height = sizes[0][1]
    for(let i = 1; i<sizes.length; i++){
        if(width < sizes[i][0]){
            width = sizes[i][0];
        }
        if(height < sizes[i][1]){
            height = sizes[i][1];
        }
    }
    answer = width*height;
    return answer;
}
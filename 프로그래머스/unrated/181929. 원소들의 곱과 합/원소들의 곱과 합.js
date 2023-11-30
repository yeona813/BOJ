function solution(num_list) {
    var answer = 0;
    let multi = 1;
    let sumsquare = 0;
    for(let i = 0; i<num_list.length; i++){
        multi *= num_list[i];
        sumsquare +=num_list[i];
    }
    if(multi < sumsquare**2){
        answer = 1;
    }
    else {
        answer = 0;
    }
    return answer;
}
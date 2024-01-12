function solution(babbling) {
    const array = ['aya','ye','woo','ma'];
    let count = 0;
    
    for(let i = 0; i < babbling.length; i++){
        let word = babbling[i];
        
        for(let j = 0; j < array.length; j++){
            if(word.includes(array[j].repeat(2))){
                break;
            }
            word = word.split(array[j]).join(" ");
        }
        
        if(word.split(" ").join("").length === 0){
            count += 1;
        }
    }
    
    return count;
}
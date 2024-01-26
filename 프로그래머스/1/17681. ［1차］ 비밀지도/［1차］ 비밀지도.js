function solution(n, arr1, arr2) {
    var answer = [];
    let array = []
    for(let i = 0; i<arr1.length; i++){
        array[i] = (arr1[i]|arr2[i]).toString(2);
    }
    for(let i = 0; i<array.length; i++){
        while(array[i].length < n){
            array[i] = '0' + array[i];
        }
    }
    
    for(let i = 0; i<array.length; i++){
        array[i] = array[i].replaceAll('1', '#');
        array[i] = array[i].replaceAll('0', ' ');
    }
    return array;
    
}

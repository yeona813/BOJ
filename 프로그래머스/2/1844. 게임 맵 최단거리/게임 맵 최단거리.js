function solution(maps) {
    let dx = [-1, 0, 1, 0];
    let dy = [0, 1, 0, -1];
    
    let row = maps.length;
    let column = maps[0].length;
    
    let queue = [[0,0,1]];
    maps[0][0] = 0;
    
    while(queue.length){
        let [x, y, count] = queue.shift();
        
        for(let i = 0; i<4; i++){
            let nextx = x + dx[i];
            let nexty = y + dy[i];
            
            if(nextx === row-1 && nexty === column-1) return ++count;
            
            if(nextx >= 0 && nexty >= 0 && nextx < row && nexty <column){
                if(maps[nextx][nexty] === 1){
                    queue.push([nextx, nexty, count+1]);
                    maps[nextx][nexty] = 0;
                }
            }
        }
    }
       return -1;
}
    
    
    
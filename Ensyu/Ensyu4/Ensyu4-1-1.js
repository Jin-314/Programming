let max = 12, min = 1;
let rand = Math.floor(Math.random() * (max - min) + min);

if(rand % 2 == 0){
    document.writeln(`乱数${rand}は偶数です。`);
}else{
    document.writeln(`乱数${rand}は奇数です。`);
}
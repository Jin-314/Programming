function min(a, b, c){
    let min = a;
    if(a < b){
        if(a > c){
            min = c;
        }
    }else if(b < c){
        min = b;
    }else{
        min = c;
    }
    return min;
}

let a = Math.floor(Math.random() * 100);
let b = Math.floor(Math.random() * 100);
let c = Math.floor(Math.random() * 100);

document.writeln(`${a}、${b}、${c}の最小値は${min(a,b,c)}です。`); 
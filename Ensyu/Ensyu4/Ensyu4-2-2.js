let max = 5, min = 1;
let rand1 = Math.floor(Math.random() * (max - min) + min);
let rand2 = 0;
while(rand1 != rand2){
    rand2 = Math.floor(Math.random() * (max - min) + min);
}

document.writeln(`${rand1}=${rand2}`);
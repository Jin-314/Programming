let max = 12, min = 1;
let rand = Math.floor(Math.random() * (max - min) + min);

switch(rand){
    case 11:
    case 12:
    case 1:
        document.writeln(`${rand}月は冬です。`);
        break;
    case 2:
    case 3:
    case 4:
        document.writeln(`${rand}月は春です。`);
        break;
    case 5:
    case 6:
    case 7:
        document.writeln(`${rand}月は夏です。`);
        break;
    case 8:
    case 9:
    case 10:
        document.writeln(`${rand}月は秋です。`);
        break;
}
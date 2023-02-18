try{
    let x = 2;
    let result = x + y;
}catch(e){
    document.writeln(e.message);
}finally{
    document.writeln("さようなら！");
}
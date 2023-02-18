function sleep(msec) {
    return new Promise(function(resolve) {

        setTimeout(function() {resolve()}, msec);

    })
}

async function brackhole(){
    for(let month = 1; month < 13; month++){
        await sleep(1500);

        document.writeln(`${month}月が過ぎました。<br>`);
    }
}

brackhole();
function power(x,y){
    console.log(x**y);
    console.log(Math.pow(x,y));
    let p=1;
    for(let i=0;i<y;i++){
        p=p*x;
    }
    console.log(p);
}
power(2,3);
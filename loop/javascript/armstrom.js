function armstrom(n){
    let sum=0,pro;
    while(n>0){
        pro=n%10;
        sum=sum+(pro**3);
        n=Math.floor(n/10);
}
console.log(sum);
}
armstrom(153);
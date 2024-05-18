function sum_f_l_digit(n){
    let last=n%10;
    let first;
    while(n>10){
        n=n/10;
    }
    first=n;
    console.log(Math.floor(last+first));
}
sum_f_l_digit(123);
function sum_number(n){
    let sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    console.log(Math.floor(sum));
}
sum_number(123);
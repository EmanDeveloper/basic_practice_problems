function prime(x){
    let j=1,count=0;
    while(j<=x){
        if(x%j==0){
            count++;
        }
        j++;
    }
    count==2?console.log("Prime"):console.log("Not prime");
}
prime(3);
function sort_check(arr){
    let c=true;
    for(let i=0;i<arr.length-1;i++){
        if(arr[i]>arr[i+1]){
            c=false;
            break; 
        }
    }
    c ? console.log("True") : console.log("False");
}
let arr=[1,2,3,4,5,-1];
sort_check(arr);

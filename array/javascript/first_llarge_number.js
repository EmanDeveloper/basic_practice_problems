function large_number(arr){
    let max=arr[0];
    for(let i=0;i<arr.length;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    console.log(max);
}
let arr=[1,2,3,4,5,6,7];
large_number(arr);
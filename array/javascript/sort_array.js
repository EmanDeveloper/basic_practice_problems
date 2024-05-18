function sort(arr){
    for(let i=0;i<arr.length;i++){
        for(let j=i;j<arr.length-i;j++){
            let t=arr[i];
            if(arr[i]>arr[j]){
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(let i of arr){
        console.log(i);
    }
}
let arr=[6,9,3,-1,90,99];
sort(arr)
function search(arr,key){
    let check=false;
    for(let i=0;i<arr.length;i++){
        if(arr[i]==key){
            check=true;
        }
    }
    check?console.log("True"):console.log("False");
}
let arr=[2,3,90,78,356,3];
search(arr,-1);
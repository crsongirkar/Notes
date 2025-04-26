function resvers() {
  let a = "1,2,3,4,5,6,7,8";
  let arr = a.split(",");
  console.log(arr);

  for (let i = arr.length - 1; i >= 0; i--) {
    console.log(arr[i]);
  }
}
//resvers();

function sorting(){
  let a = "9,4,1,3,8,2,6,5";
  let arr = a.split(",");
  console.log(arr);

  for(let i=0;i<arr.length;i++){
    for(let j = i+1;j<arr.length;j++){
        if (arr[i] > arr[j]) {
        let temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
console.log("After sorting:", arr);
}
//sorting();

// find kth large
function kth(k) {
  let a = "4,3,2,9,5,8,7";
  let arr = a.split(",").map(Number);
  arr.sort((a, b) => b - a);
  console.log(arr);
  console.log(arr[k - 1]);
}

//kth(1);



function uni(){
    var a = "1,2,3,4,4,5,1,5,6,6";
    var arr = a.split(",");
    var store = [...new Set(arr)];
    console.log(arr);
   
    // for(let i = 0; i < arr.length; i++){
    //     // if (!store.includes(arr[i])) {
    //     //     store.push(arr[i]);
    //     // }
  
        
    // }
     
    console.log(store);
}
//uni();

// double product
function DoubleProduct(){
    
    var n = "11,3,9,23,5,3,9";
    var arr = n.split(",").map(Number);;
    let sum = 0; 
    
    for (let i = 0; i < arr.length; i++) {
     sum += arr[i];
   }
   var tot = 2*sum;
   console.log("Additon of N is :- ",sum);
   console.log("Product of N is :- ",tot);
   
   for(let i=0;i<arr.length;i++){
       for(let j=i+1;j<arr.length;j++){
           let sum2 = arr[i]+arr[j];
           if(sum2>tot){
               console.log("True");
           }
           else{
               console.log("False");
           }
       }
   }
    
}
//DoubleProduct();

//sales buy and stock 1

function SandB(){
    var n = "7,1,5,3,6,4";
    var arr = n.split(",").map(Number);
    var Minn = Math.min (...arr);
    console.log("Minimum number is ",Minn);
    var Maxx = Math.max(...arr);
    console.log("Maximum number is ",Maxx);
    let profit = Maxx - Minn;
    console.log("Profit is ",profit);
}
//zSandB();






















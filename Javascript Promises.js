const p1 = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve("p1 resolved")
  }, 6000)
})

const p2 = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve("p2 resolved")
  }, 3000)
})

async function abc() {
  
  const a = await p1;
  console.log(a);
  
}

async function hello() {
	 
console.log("start");
  abc();
console.log("hello before b");
const b = await p2;
  console.log(b);
  console.log("lkjsd");
}

hello();



// const products = ["a", "b", "c", "lkdsj", "lksd", "lkjs"]

// const cart =  createCart(products)
// cart.then(function (orderId) {
//   return payment(orderId) // must return this promise to get response in next then() function
// }).then(function (paymentInfo) {
//   console.log(paymentInfo)
// })
// .catch(function(err) {
//   console.log("error", err)
// })

// function createCart(products) {
//   return new Promise(function(resolve, reject) {
//     if(products.length > 5) {
//       setTimeout(function() {
//         resolve("1234");
//       }, 3000);
//     }
//     else {
//       reject("Not sufficient product");
//       }
//   })
// }
// function payment(orderId) {
//   return new Promise((resolve, reject) => {
//     resolve("payment succcessfully for " + orderId)
//   })
// }

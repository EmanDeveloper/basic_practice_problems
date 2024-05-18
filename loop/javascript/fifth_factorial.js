function factorial(n) {
    let result = 1;
    for (let i = n; i > 0; i--) {
        result *= i;
    }
    console.log("Factorial of " + n + " : " + result);
}
factorial(5);

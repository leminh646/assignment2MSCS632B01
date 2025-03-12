function outerFunction(x) {
    let y = 10; // Local variable

    function innerFunction() {
        y += x; // Accessing outer variable
        console.log(`Inner function: y = ${y}`);
    }

    innerFunction();
    console.log(`Outer function: y = ${y}`);
}

// Weak typing example
let variable = 10;
console.log(`Type before: ${typeof variable}`);
variable = "Hello";
console.log(`Type after: ${typeof variable}`);

// Calling the function
outerFunction(5);

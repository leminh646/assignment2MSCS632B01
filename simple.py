def outer_function(x):
    y = 10  # Local variable in the outer function
    
    def inner_function():
        nonlocal y  # Accessing the variable from the enclosing scope
        y += x
        print(f"Inner function: y = {y}")
    
    inner_function()
    print(f"Outer function: y = {y}")

# Dynamic typing example
var = 10
print(f"Type of var before: {type(var)}")
var = "Hello"
print(f"Type of var after: {type(var)}")

# Calling the function
outer_function(5)

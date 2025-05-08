/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    var temp = 0;
    for(let i = 0; i < args.length; i++)
    {
        temp++;
    }
    return temp;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */

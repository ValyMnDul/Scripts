// Node.js
// Exports


const peoples=['Eu','Tu','Vaca'];
const ages=[34,54,34,12];
module.exports={peoples,ages}; // Exporting the module

/* Example of importing into any js file

    const {peoples,ages}=require('./Exports');
    console.log(peoples);
    console.log(ages);

    // Output:
    // [ 'Eu', 'Tu', 'Vaca' ]
    // [ 34, 54, 34, 12 ]
    // The module.exports object is the object that is actually returned as the result of a require() call.

*/


// Github:ValyMnDul
// Browser & Node.js
// SetTimeout and setInterval


// SetInterval is a function that executes a function repeatedly after a specified number of milliseconds
const interval = setInterval(()=>
{
    console.log("INTERVAL");
},1000)


// SetTimeout is a function that executes a function after a specified number of milliseconds
setTimeout(()=>
{
    clearInterval(interval); // stops the interval
},4000);


// Github:ValyMnDul
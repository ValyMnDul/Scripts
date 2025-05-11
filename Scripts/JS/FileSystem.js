//Node.js 
//File System


const fs=require('fs'); // File system module

// Reading files
fs.readFile('./docs/doc1.txt',(error,data)=>
{
    if(error)
    {
        console.log(error);
    }
    else
    {
        console.log(data.toString());// prints the content of the file
    }
});


// Writing files
fs.writeFile('./docs/doc2.txt','Hello world!',()=>
{
    console.log("DONE");
});


// Create and delete folders
// Check if the folder exists
// If it doesn't exist, create it
// If it exists, delete it
if(!fs.existsSync('./folder'))
{
    fs.mkdir('./folder',(error)=>
    {
        if(error) 
        {
            console.log(error); 
        }
        else 
        {
            console.log("Created");
        }
    });
}
else
{
    fs.rmdir('./folder',(error)=>
    {
        if(error) 
        {
            console.log(error);
        }
        else 
        {
            console.log("Deleted");
        }
    });
} 


// Delete files
// Check if the file exists
// If it exists, delete it
// If it doesn't exist, do nothing
if(fs.existsSync('./docs/doc3.txt'))
{
    fs.unlink('./docs/caca.txt',(error)=>
    {
        if(error)
        {
            console.log(error);
        }
        else 
        {
            console.log("DELETED");
        }
    });
}


// Github:ValyMnDul

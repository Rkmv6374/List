const express = require('express');
const bodyparser = require('body-parser');
const { rmSync } = require('fs');
const app = express();

app.use(bodyparser.urlencoded({extended : true}));
app.use(express.static("public"));
app.use("view-engine","ejs");

app.post("/",function(req,res)
{
  var str = req.body.name;
  var str2 = req.body.nm2;

});

// <form method="post" action ="/">
//      <label for="fname"> f name</label>
//      <input value ="name" name="fname" type ="text">enter ur name</input>
//      <label for="secname">scname</label>
//      <input value="nm2" type="text"></input>
//      <button type="submit">submit</button>
// </form>


app.get("/",function(req,res)
{
    res.write("hello user!");
    res.end();
});



app.listen("/",function(req,res)
{
    console.log("listen on port 3000");
});



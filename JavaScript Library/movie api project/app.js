const express  = require('express');
let app = express();
const port = 3000;
const request = require('request');
app.set('view engine','ejs');

app.get('/',(req,res) =>res.render('Search') );


app.get('/results',(req,res) => {
  let query = req.query.search;
  let url = `http://www.omdbapi.com/?s=${query}&apikey=254910c7`
  request(url, (error,response,body) =>{
    if (!error && response.statusCode == 200) {
      let data = JSON.parse(body);
      res.render('results',{data:data});
    }
  } );
});

app.listen(port,() => console.log(`Listening at ${port} port`));
//http://www.omdbapi.com/?s=batman&apikey=254910c7

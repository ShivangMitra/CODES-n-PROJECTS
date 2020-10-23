var mongoose = require("mongoose");
mongoose.connect("mongodb://localhost/zephKart", {useNewUrlParser: true, useUnifiedTopology: true});

var db = mongoose.connection;
db.on("error", console.error.bind(console, "connnection error: "));

db.once("open", function(){
    console.log("We are connected Sir")
});

var kittySchema = new mongoose.Schema({
    name: String
});

kittySchema.methods.speak = function(){
    var greeting = "My name is " + this.name
    console.log(greeting);
}

var Kitten = mongoose.model("Kitten", kittySchema)

var zephKitty = new Kitten({name: "zephKitty"});
// console.log(zephKitty.name);
// zephKitty.speak();

zephKitty.save(function(err, zephKitty){
    if(err) return console.error(err);
    // zephKitty.speak();
});

Kitten.find({name: "zephKitty"}, function(err,kittens){
    if(err) return console.error(err);
    console.log(kittens);
})
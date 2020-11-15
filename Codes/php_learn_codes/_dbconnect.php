<?php
//connecting to database
$servername = "localhost";
$username = "root";
$password = "";
$database = "fromphp_db";

//create a connection
// $conn = mysqli_connect($servername, $username, $password);
$conn = mysqli_connect($servername, $username, $password, $database);


//die if connection was not successful
if(!$conn){
    die("Sorry failed to connect: " . mysqli_connect_error());
}
else{
    echo "Connection was successful <br>";
}

?>
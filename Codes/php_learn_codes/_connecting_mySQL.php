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


// //create a db
// $sql = "CREATE DATABASE fromphp_db";
// $result = mysqli_query($conn, $sql);

// //check for the database creation success
// if($result){
//     echo "The db was created successfully!";
// }
// else{
//     echo "Either the db already exsists or it was not created successfully<br>Error: " . mysqli_error($conn);
// }


// //create a table in db
// $sql = "CREATE TABLE `trip` (`sno` INT(6) NOT NULL AUTO_INCREMENT, `name` VARCHAR(12) NOT NULL, `dest` VARCHAR(6) NOT NULL, PRIMARY KEY(`sno`))";

// $result = mysqli_query($conn, $sql);

// //check for the table creation
// if($result){
//     echo "The table was created successfully!";
// }
// else{
//     echo "Either the table already exsists or it was not created successfully<br>Error: " . mysqli_error($conn);
// }


//inserting data in db
$sql = "INSERT INTO `trip` (`name`, `dest`) VALUES ('Chintu', 'Mirjapur')";
// $sql = "INSERT INTO `trip` (`name`, `dest`) VALUES ('$name', '$destination')";

$result = mysqli_query($conn, $sql);

//check for the insertion
if($result){
    echo "insertion successfully!";
}
else{
    echo "inseertion was not successfully<br>Error: " . mysqli_error($conn);
}

?>
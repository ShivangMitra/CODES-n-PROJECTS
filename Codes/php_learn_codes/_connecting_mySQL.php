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


// //inserting data in db
// $sql = "INSERT INTO `trip` (`name`, `dest`) VALUES ('Pintu', 'Ghar')";
// // $sql = "INSERT INTO `trip` (`name`, `dest`) VALUES ('$name', '$destination')";

// $result = mysqli_query($conn, $sql);

// //check for the insertion
// if($result){
//     echo "insertion successfully!";
// }
// else{
//     echo "inseertion was not successfully<br>Error: " . mysqli_error($conn);
// }


// //reading data from dd
// $sql = "SELECT * FROM `trip`";
// $result = mysqli_query($conn, $sql);

// $num = mysqli_num_rows($result);

// if($num > 0){
//     while($row = mysqli_fetch_assoc($result)){
//         // echo var_dump($row);
//         echo "hello " . $row['name'] . " from " . $row['dest'];
//         echo "<br>";
//     }
// }


// //updating data in db
// $sql = "SELECT * FROM `trip` WHERE `dest` = 'Mirjap'";
// $result = mysqli_query($conn, $sql);

// $num = mysqli_num_rows($result);

// if($num > 0){
//     while($row = mysqli_fetch_assoc($result)){
//         // echo var_dump($row);
//         echo "hello " . $row['name'] . " from " . $row['dest'];
//         echo "<br>";
//     }
// }

// $sql = "UPDATE `trip` SET `name` = 'Mika' WHERE `dest` = 'Mirjap'";
// $result = mysqli_query($conn, $sql);

// echo var_dump($result);

// $aff = mysqli_affected_rows($conn);
// echo "number of rows affected: $aff";

// if($result){
//     echo "We updated the record successfully";
// }
// else{
//     echo "We could not update the record";
// }


//deleting records from db
$sql = "DELETE FROM `trip` WHERE `trip`.`sno` = 2";
// $sql = "DELETE FROM `trip` WHERE `dest` = 'Mirjap'";
// $sql = "DELETE FROM `trip` WHERE `dest` = 'Mirjap' LIMIT 3";
$result = mysqli_query($conn, $sql);

if($result){
    echo "Deleted record";
}
else{
    echo "Could not delete record";
}

?>
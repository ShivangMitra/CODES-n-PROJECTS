<?php

$login = false;
$showError = false;

if($_SERVER["REQUEST_METHOD"] == "POST"){
    include "partials/_dbconnect.php";

    $username = $_POST["username"];
    $password = $_POST["password"];


    // $sql = "SELECT * FROM `users` WHERE username='$username' AND password='$password'";
    $sql = "SELECT * FROM `users` WHERE username='$username'";
    $result = mysqli_query($conn, $sql);
    $num = mysqli_num_rows($result);
    if($num == 1){
        while($row = mysqli_fetch_assoc($result)){
            if(password_verify($password, $row['password'])){
                $login = true;
                session_start();
                $_SESSION['loggedin'] = true;
                $_SESSION['username'] = $username;
                header("location: welcome.php");
            }
            else{
                $showError = true;
            }
        }
    }
    else{
        $showError = true;
    }
}

?>

<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css" integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">

    <title>Login</title>
  </head>

    <style>

        body{
            background-color: #343434;
            color: white;
        }

        .container{
            display: flex;
            flex-direction: column;
            align-items: center;
        }

        .form-group{
            text-align: center;
        }

        #signup_form{
            display: flex;
            flex-direction: column;
            align-items: center;
        }
    </style>

  <body>

    <?php
        require "partials/_nav.php";
    ?>

    <?php

    if($login){
        echo '<div class="alert alert-success alert-dismissible fade show" role="alert">
                <strong>Success!</strong> You are logged in.
                <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                    <span aria-hidden="true">&times;</span>
                </button>
            </div>';
    }
    if($showError){
        echo '<div class="alert alert-danger alert-dismissible fade show" role="alert">
                <strong>Failure!</strong> Invalid credentials.
                <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                    <span aria-hidden="true">&times;</span>
                </button>
            </div>';
    }

    ?>

    <h1 class="text-center my-3">Login to our website</h1>

    <div class="container my-5">

        <form action="/login_system/login.php" method="post" id="signup_form">
            <div class="form-group col-md-12">
                <label for="username">Username</label>
                <input type="text" class="form-control" id="username" name="username" aria-describedby="emailHelp">
            </div>
            <div class="form-group col-md-12">
                <label for="password">Password</label>
                <input type="password" class="form-control" id="password" name="password">
                <small id="emailHelp" class="form-text text-muted">We'll never share your password with anyone else.</small>
            </div>

            <button type="submit" class="btn btn-primary">Login</button>

        </form>

    </div>

    <!-- Optional JavaScript; choose one of the two! -->

    <!-- Option 1: jQuery and Bootstrap Bundle (includes Popper) -->
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ho+j7jyWK8fNQe+A12Hb8AhRq26LrZ/JpcUGGOn+Y7RsweNrtN/tE3MoK7ZeZDyx" crossorigin="anonymous"></script>

    <!-- Option 2: jQuery, Popper.js, and Bootstrap JS
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js" integrity="sha384-9/reFTGAW83EW2RDu2S0VKaIzap3H66lZH81PoYlFhbGU+6BZp6G7niu735Sk7lN" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/js/bootstrap.min.js" integrity="sha384-w1Q4orYjBQndcko6MimVbzY0tgp4pWB4lZ7lr30WKz0vr/aWKhXdBNmNb5D92v7s" crossorigin="anonymous"></script>
    -->
  </body>
</html>
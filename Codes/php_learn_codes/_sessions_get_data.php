<?php

    session_start();

    if(isset($_SESSION['username'])){
    echo "welcome " . $_SESSION['username'];
    echo "<br>";
    echo "your fav category is " . $_SESSION['favCat'];
    }
    else{
        echo "Please login to continue";
    }

?>
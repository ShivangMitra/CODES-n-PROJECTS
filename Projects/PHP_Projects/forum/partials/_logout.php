<?php
    session_start();
    echo "logging you out pls wait...";
    session_destroy();
    unset($_GET['loginsuccess']);
    header("Location: /forum");
?>
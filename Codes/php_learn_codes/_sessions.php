<?php

    session_start();

    $_SESSION['username'] = "Chintu";
    $_SESSION['favCat'] = "Books";

    echo "we have saved ur session";

?>
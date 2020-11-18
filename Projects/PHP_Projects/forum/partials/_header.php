<?php   

    session_start();

    echo '<nav class="navbar navbar-expand-lg navbar-dark bg-dark">
        <a class="navbar-brand" href="/forum">z-Dizcuzz</a>
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
        </button>

        <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav mr-auto">
                <li class="nav-item active">
                    <a class="nav-link" href="/forum">Home <span class="sr-only">(current)</span></a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="/forum/about.php">About</a>
                </li>
                <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                    Categories
                    </a>
                    <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                    <a class="dropdown-item" href="#">Action</a>
                    <a class="dropdown-item" href="#">Another action</a>
                    <div class="dropdown-divider"></div>
                    <a class="dropdown-item" href="#">Something else here</a>
                    </div>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="/forum/contact.php" tabindex="-1">Contact</a>
                </li>
            </ul>';

            if(isset($_SESSION['loggedin']) && $_SESSION['loggedin'] == true){
                echo '<form class="form-inline my-2 my-lg-0">
                        <input class="form-control mr-sm-2" type="search" placeholder="Search" aria-label="Search">
                        <button class="btn btn-success my-2 my-sm-0" type="submit">Search</button>
                        <p class="text-light my-0 mx-2">Welcome '. $_SESSION['userEmail'] .'</p>
                        <a href="partials/_logout.php" class="btn btn-outline-success">Logout</a>
                    </form>';
            }
            else{
                echo'<form class="form-inline my-2 my-lg-0">
                        <input class="form-control mr-sm-2" type="search" placeholder="Search" aria-label="Search">
                        <button class="btn btn-success my-2 my-sm-0" type="submit">Search</button>
                    </form>
                    <div class="mx-2">
                        <button class="btn btn-outline-success" data-toggle="modal" data-target="#loginModal">Login</button>
                        <button class="btn btn-outline-success" data-toggle="modal" data-target="#signupModal">Sign Up</button>
                    </div>';
            }

        echo '</div>
    </nav>';

    include "_loginModal.php";
    include "_signupModal.php";

    if(isset($_GET['signupsuccess']) && $_GET['signupsuccess'] == "true"){
        echo '<div class="alert alert-success alert-dismissible fade show my-0" role="alert">
                <strong>Sign Up Successful!</strong> You can now login using your details.
                <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                <span aria-hidden="true">&times;</span>
                </button>
            </div>';
    }
    else if(isset($_GET['signupsuccess']) && $_GET['signupsuccess'] == "false" && isset($_GET['error'])){
        echo '<div class="alert alert-danger alert-dismissible fade show my-0" role="alert">
                <strong>Sign Up Failed!</strong> '. $_GET['error'] .'
                <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                <span aria-hidden="true">&times;</span>
                </button>
            </div>';
    }

    if(isset($_GET['loginsuccess']) && $_GET['loginsuccess'] == "true"){
        echo '<div class="alert alert-success alert-dismissible fade show my-0" role="alert">
                <strong>Login Successful!</strong> Welcome to ziDizcuzz
                <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                <span aria-hidden="true">&times;</span>
                </button>
            </div>';
    }
    else if(isset($_GET['loginsuccess']) && $_GET['loginsuccess'] == "false" && isset($_GET['login_error']))
    {
        echo '<div class="alert alert-danger alert-dismissible fade show my-0" role="alert">
                <strong>Login Failed!</strong> '. $_GET['login_error'] .'
                <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                <span aria-hidden="true">&times;</span>
                </button>
            </div>';
    }

?>
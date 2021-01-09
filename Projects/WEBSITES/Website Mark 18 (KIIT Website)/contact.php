<!doctype html>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Favicon -->
    <link rel="icon" href="img/logo.jpg" type="image/gif" sizes="16x16">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css"
        integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">

    <!-- Title -->
    <title>KIIT - Contact Us</title>
    <!-- Developed by Shivang Mitra -->

    <script defer
        src="https://maps.googleapis.com/maps/api/js?key=AIzaSyCIPFelsP-Ef1UJHvdLzE4lqQiAU34VJ6I&callback=initMap">
        </script>
    <script src="js/contact.js"></script>

    <!-- Style Sheets -->
    <link rel="stylesheet" href="css/contact.css">
</head>

<body>
    <!-- Navbar -->
    <nav class="navbar navbar-expand-lg navbar-dark bg-dark navbar-pos">
        <a class="navbar-brand" href="/" style="color: rgb(3, 212, 3);">KIIT</a>
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent"
            aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon"></span>
        </button>

        <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav mr-auto">
                <li class="nav-item">
                    <a class="nav-link" href="/college_website/index.php">Home</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="/college_website/about.php">About Us</a>
                </li>
                <li class="nav-item active">
                    <a class="nav-link" href="/college_website/contact.php">Contact Us<span class="sr-only">(current)</span></a>
                </li>
                <!-- <li class="nav-item dropdown">
                    <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button"
                        data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                        Dropdown
                    </a>
                    <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                        <a class="dropdown-item" href="#">Action</a>
                        <a class="dropdown-item" href="#">Another action</a>
                        <div class="dropdown-divider"></div>
                        <a class="dropdown-item" href="#">Something else here</a>
                    </div>
                </li> -->
                <!-- <li class="nav-item">
                    <a class="nav-link disabled" href="#" tabindex="-1" aria-disabled="true">Disabled</a>
                </li> -->
            </ul>
            <!-- <form class="form-inline my-2 my-lg-0">
                <input class="form-control mr-sm-2" type="search" placeholder="Search" aria-label="Search">
                <button class="btn btn-outline-success my-2 my-sm-0" type="submit">Search</button>
            </form> -->
        </div>
    </nav>

    <!-- Heading Contact and Map -->
    <div class="mainblock container-fluid" id="top">
        <div class="heading">
            <h1>Kalinga Institute of Industrial Technology (KIIT)</h1>
            <div id="box2">
                <h4 id="secondary-heading">Deemed to be University</h4>
                <div id="borderbottom"></div>
            </div>
        </div>
        <div class="contact-map">
            <div class="contact">
                <div id="box">
                    <h2>Contact Details</h2>
                    <div id="borderleft"></div>
                </div>
                <div class="total-content">
                    <div class="img">
                        <i class="fas fa-map-marker-alt size"></i>
                    </div>
                    <div class="content">
                        <h4>Write To:</h4>
                        <p>Kalinga Institute of Industrial Technology (KIIT)
                            Deemed to be University
                            Bhubaneswar, Odisha, India
                            Pin: 751024</p>
                    </div>
                </div>
                <div class="total-content">
                    <div class="img">
                        <i class="far fa-envelope size"></i>
                    </div>
                    <div class="content">
                        <h4>Email:</h4>
                        <a href="">kiit@kiit.ac.in</a>
                        <a href="">admission@kiit.ac.in</a>
                    </div>
                </div>
                <div class="total-content">
                    <div class="img">
                        <i class="fas fa-phone size"></i>
                    </div>
                    <div class="content">
                        <h4>Admission Contact:</h4>
                        <a href="">+91 1234567890</a><br>
                        <a href="">+91 1234567890</a><br>
                        <a href="">+91 1234567890</a><br>
                        <a href="">+91 1234567890</a><br>
                        <a href="">+91 1234567890</a>
                    </div>
                </div>
                <div class="total-content">
                    <div class="img">
                        <i class="fas fa-globe size"></i>
                    </div>
                    <div class="content">
                        <a href="">kiit.ac.in</a>
                    </div>
                </div>
            </div>
            <div id="map">
                <!-- AIzaSyCIPFelsP-Ef1UJHvdLzE4lqQiAU34VJ6I -->
            </div>
        </div>
    </div>

    <!-- ALERT -->
    <?php
    
        if($_SERVER["REQUEST_METHOD"] == "POST"){
            echo '<div id="alert-success" class="alert alert-success alert-dismissible fade show" role="alert">
                    <strong>Success!</strong> Your form has been submitted successfully
                    <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                        <span aria-hidden="true">&times;</span>
                    </button>
                </div>';
        }
    
    ?>

    <!-- Help You -->
    <div class="help-you container">
        Ask how we can help you:
    </div>

    <!-- Form -->
    <div class="container">
        <form method="POST" action="/college_website/contact.php">
            <div class="form-group">
                <label for="name">Your Name</label>
                <input type="name" class="form-control" id="name" placeholder="Chintu Prasad">
            </div>
            <div class="form-group">
                <label for="email">Your Email</label>
                <input type="email" class="form-control" id="email" placeholder="name@example.com">
            </div>
            <div class="form-group">
                <label for="department">Department</label>
                <select class="form-control" id="department">
                    <option>Admission</option>
                    <option>Compliance</option>
                    <option>Public Relation</option>
                    <option>Hostel Registrar</option>
                    <option>International Relation</option>
                </select>
            </div>
            <div class="form-group">
                <label for="assoc">Associativity</label>
                <div class="form-check form-check">
                    <input class="form-check-input" type="radio" name="inlineRadioOptions" id="inlineRadio1"
                        value="option1">
                    <label class="form-check-label" for="inlineRadio1">Parent</label>
                </div>
                <div class="form-check form-check">
                    <input class="form-check-input" type="radio" name="inlineRadioOptions" id="inlineRadio2"
                        value="option2">
                    <label class="form-check-label" for="inlineRadio2">Faculty</label>
                </div>
            </div>
            <div class="form-group">
                <label for="message">Your Message</label>
                <textarea class="form-control" id="message" rows="3"></textarea>
            </div>
            <div class="form-group form-check">
                <input type="checkbox" class="form-check-input" id="robot">
                <label class="form-check-label" for="robot">I'm not a robot</label>
                <i class="fas fa-robot" style="font-size: 20px; color: rgb(3, 190, 3);"></i>
            </div>
            <button type="submit" class="btn btn-success" id="submit">Submit</button>
        </form>
    </div>

    <!-- Footer -->
    <footer>
        <span>© Copyright 2020 - All Rights Reserved | Shivang Mitra | 1929047@kiit.ac.in</span>
        <div class="social">
            <a href="https://www.facebook.com/KIITUniversity" target="_blank">
                <i class="fab fa-facebook-f mykit-size-2"></i>
            </a>
            <a href="https://www.instagram.com/kiituniversity/" target="_blank">
                <i class="fab fa-instagram mykit-size-2"></i>
            </a>
            <a href="https://twitter.com/KIITUniversity" target="_blank">
                <i class="fab fa-twitter mykit-size-2"></i>
            </a>
        </div>
    </footer>

    <!-- jQuery and Bootstrap Bundle (includes Popper) -->
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"
        integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj"
        crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-ho+j7jyWK8fNQe+A12Hb8AhRq26LrZ/JpcUGGOn+Y7RsweNrtN/tE3MoK7ZeZDyx"
        crossorigin="anonymous"></script>
    <script src="https://kit.fontawesome.com/9c0fce3173.js" crossorigin="anonymous"></script>
</body>

</html>
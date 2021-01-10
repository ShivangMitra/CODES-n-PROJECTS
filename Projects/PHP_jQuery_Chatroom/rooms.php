<?php

$roomname = $_GET['roomname'];

include 'db_connect.php';

$sql = "SELECT * FROM `rooms` WHERE roomname = '$roomname';";
$result = mysqli_query($conn, $sql);
if($result){
    if(mysqli_num_rows($result) == 0)
    {
        $message = "This room does not exist. Try creating anew one";
        echo '<script language="javascript">';
        echo 'alert(" '.$message.' ");';
        echo 'window.location="http://localhost/chatroom";';
        echo '</script>';
    }
}
else{
    echo "Error: ". mysqli_error($conn);
}

?>

<!DOCTYPE html>
<html>

<head>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="shortcut icon" href="img/logo.svg" type="image/x-icon">

    <link rel="canonical" href="https://getbootstrap.com/docs/4.5/examples/product/">

    <!-- Bootstrap core CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/css/bootstrap.min.css"
        integrity="sha384-TX8t27EcRE3e/ihU7zmQxVncDAy5uIKz4rEkgIXeMed4M0jlfIDPvg6uqKI2xXr2" crossorigin="anonymous">

    <!-- Custom styles for this template -->
    <link href="css/product.css" rel="stylesheet">

    <style>
    .chatbox {
        margin: 0 auto;
        max-width: 800px;
        padding: 0 20px;
        margin-top: 50px;
    }

    .bd-placeholder-img {
        font-size: 1.125rem;
        text-anchor: middle;
        -webkit-user-select: none;
        -moz-user-select: none;
        -ms-user-select: none;
        user-select: none;
    }

    .nav-space {
        margin-left: 180px;
    }

    @media (min-width: 768px) {
        .bd-placeholder-img-lg {
            font-size: 3.5rem;
        }
    }

    .container-chat {
        border: 2px solid #dedede;
        background-color: #f1f1f1;
        border-radius: 5px;
        padding: 10px;
        margin: 10px 0;
    }

    .darker {
        border-color: #ccc;
        background-color: #ddd;
    }

    .container-chat::after {
        content: "";
        clear: both;
        display: table;
    }

    .container-chat img {
        float: left;
        max-width: 60px;
        width: 100%;
        margin-right: 20px;
        border-radius: 50%;
    }

    .container-chat img.right {
        float: right;
        margin-left: 20px;
        margin-right: 0;
    }

    .time-right {
        float: right;
        color: #aaa;
    }

    .time-left {
        float: left;
        color: #999;
    }

    .overflew {
        height: 350px;
        overflow-y: scroll;
    }
    </style>
</head>

<body>

    <nav class="site-header sticky-top py-1">
        <div class="container d-flex flex-column flex-md-row">
            <a class="py-2" href="#" aria-label="Product">
                <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="none" stroke="currentColor"
                    stroke-linecap="round" stroke-linejoin="round" stroke-width="2" class="d-block mx-auto" role="img"
                    viewBox="0 0 24 24" focusable="false">
                    <title>Product</title>
                    <circle cx="12" cy="12" r="10" />
                    <path
                        d="M14.31 8l5.74 9.94M9.69 8h11.48M7.38 12l5.74-9.94M9.69 16L3.95 6.06M14.31 16H2.83m13.79-4l-5.74 9.94" />
                </svg>
            </a>
            <a class="py-2 d-none d-md-inline-block nav-space" href="#">Home</a>
            <a class="py-2 d-none d-md-inline-block nav-space" href="#">About</a>
            <a class="py-2 d-none d-md-inline-block nav-space" href="#">Support</a>
        </div>
    </nav>

    <div class="chatbox">

        <h2><?php echo $roomname;?> - Chat Messages</h2>

        <div class="overflew">

            <!-- messages here -->

        </div>

        <div style="display: flex;">
            <input type="text" class="form-control" name="usermsg" id="usermsg" placeholder="Type a message"
                style="width: 90%;">
            <button class="btn btn-dark" name="submitmsg" id="submitmsg" style="width: 10%;">Send</button>
        </div>


    </div>

    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"
        integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous">
    </script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.5.3/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-ho+j7jyWK8fNQe+A12Hb8AhRq26LrZ/JpcUGGOn+Y7RsweNrtN/tE3MoK7ZeZDyx" crossorigin="anonymous">
    </script>

    <script src="https://code.jquery.com/jquery-3.5.1.min.js"
        integrity="sha256-9/aliU8dGd2tb6OSsuzixeV4y/faTqgFtohetphbbj0=" crossorigin="anonymous"></script>

    <script type="text/javascript">

    setInterval(runFunction, 1000);

    function runFunction()
    {
        $.post("htcont.php", {
            room: '<?php echo $roomname; ?>'
        },
        function(data, status){
            document.getElementsByClassName('overflew')[0].innerHTML = data;
        }
        )
    }

    var input = document.getElementById("usermsg");
    input.addEventListener("keyup", function(event){
        event.preventDefault();
        if(event.keyCode === 13){
            document.getElementById("submitmsg").click();
        }
    });

    $("#submitmsg").click(function() {
        var clientmsg = $("#usermsg").val();
        $.post("postmsg.php", {
                text: clientmsg,
                room: '<?php echo $roomname; ?>',
                ip: '<?php echo $_SERVER["REMOTE_ADDR"] ?>'
            });
        $("#usermsg").val("");
        return false;
    });
    </script>

</body>

</html>
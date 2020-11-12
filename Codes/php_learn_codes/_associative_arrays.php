<?php
$favCol = array(
    "chintu" => "red",
    "pintu" => "green",
    "bittu" => "blue"
);

echo $favCol["pintu"];

echo "<br>";

foreach($favCol as $key => $value){
    echo "element $key: is $value <br>";
}
?>
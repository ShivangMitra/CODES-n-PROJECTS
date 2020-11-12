<?php
$name = "Harry";
echo $name;

echo "<br>";

echo "length is " . strlen($name) . str_word_count($name) . strrev($name) . strpos($name, "rr") . str_replace("rr", "pp", $name);
echo "<br>";
echo str_repeat($name, 4);
echo "<br>";
echo "<pre>";
// echo rtrim("        this is space          ");
echo ltrim("        this is space          ");
echo "</pre>";
?>
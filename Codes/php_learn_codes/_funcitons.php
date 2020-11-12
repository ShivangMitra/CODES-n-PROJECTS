<?php
function tMarks($marksArr){
    $sum = 0;
    foreach($marksArr as $mark){
        $sum += $mark;
    }
    return $sum;
}

$chintu = [34, 98, 45, 12, 98, 93];
$sumMarks = tMarks($chintu);
echo $sumMarks;
?>
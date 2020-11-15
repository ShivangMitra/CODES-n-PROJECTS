<?php

    // $a = readfile("myfile.txt");
    // echo $a;

    // $a = readfile("myfile.txt");



    // $fptr = fopen("myfile.txt", "r"); //this returns false when no file could pe opened...never returns TRUE
    // if(!$fptr){
    //     die("nai khulega");
    // }

    // $content = fread($fptr, filesize("myfile.txt"));
    // echo $content;

    // fclose($fptr);
    
    
    
    // echo fgets($fptr);
    // echo fgets($fptr);
    
    // echo fgetc($fptr);
    // echo fgetc($fptr);
    
    // fclose($fptr);



    // $fptr = fopen("myfile2.txt", "w"); //when a file is opened in write mode it is emptied at that moment
    // fwrite($fptr, "daaldo kuch bhi\n");
    // fwrite($fptr, "ye bhi aa jaega file me\n");
    // fclose($fptr);



    $fptr = fopen("myfile2.txt", "a");
    fwrite($fptr, "daaldo kuch bhi\n");
    fwrite($fptr, "ye bhi aa jaega file me\n");
    fclose($fptr);

?>
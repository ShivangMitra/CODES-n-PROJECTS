// $(function(){}) this is also same as below
$(document).ready(function(){
    //code here
    // console.log($) $ = jQuery using both are same

    // $('selector').action()
    $('p').click();
    $('p').click(function () {
        console.log('you clicked on me');
        // $('p').hide();
        // $(this).hide();
        // $('#id').action();
        // $('.class').action();
    });
    // $('p').click();

    $('p').dblclick(function () {
        console.log('you double clicked on me');
    });

    //other selectors
    $('*').click(); //clicks on all the elements
    // $('p.odd').click() a paragraph whoes class is odd
    // $('p.first').click() first paragraph
});

console.log("mai document ready ke bahar hu");
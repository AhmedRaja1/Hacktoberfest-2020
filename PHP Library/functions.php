<?php
/*
* PHP Functioins
*/

function site_title($custom="") {

    if($custom == "") {
        echo "Upload Files Tutorial";
    } else {
        echo $custom." | Upload Files Tutorial";
    }
   
}
function site_url() {
    echo "http://localhost/php-tutorial/";
}
?>
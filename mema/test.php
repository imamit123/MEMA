<?php

print '22 FEB 4:41 2018';

?>
<?php
$cookie_name = "user";
$cookie_value = "Alex Porter";
setcookie($cookie_name, $cookie_value, time() + (86400 * 30), "/");
?>


<?php
if(!isset($_COOKIE[$cookie_name])) {
    echo "Cookie named '" . $cookie_name . "' is not set!";
} else {
    echo "Cookie '" . $cookie_name . "' is set!<br>";
    echo "Value is: " . $_COOKIE[$cookie_name];
}
?>

<?php

$expire = time()+3600; // 1 hour expiry
$value = "cookie value - string or interger";
setcookie("cookie_name", $value, $expire,"/", "https://dev-mema.pantheonsite.io", 0);


// Another way to debug/test is to view all cookies
print_r($_COOKIE);



?>

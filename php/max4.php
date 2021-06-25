<?php
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    $c = fgets(STDIN);
    $d = fgets(STDIN);
    
    if ( $a > $b &&  $a > $c && $a > $d) {
        echo $a . PHP_EOL;
    } else if ( $b > $c && $b > $d) {
        echo $b . PHP_EOL;
    } else if ($c > $d) {
        echo $c . PHP_EOL;
    } else {
        echo $d . PHP_EOL;
    }
?>

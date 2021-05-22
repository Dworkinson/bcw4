<?php
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    $c = fgets(STDIN);
    
    if ( $a + $b > $c ) {
        echo "alpha" . PHP_EOL;
        return;
    }
    if ( $a < $b - $c ) {
        echo "bravo" . PHP_EOL;
        return;
    }
    if ( $b % $c == 0 ) {
        echo "charlie" . PHP_EOL;
        return;
    }
    else {
        echo "zulu" . PHP_EOL;
    }
?>

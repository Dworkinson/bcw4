<?php
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    
    if ( $b > $a ) {
        echo "alpha" . PHP_EOL;
        return;
    }
    if ( $a < 0 ) {
        echo "bravo" . PHP_EOL;
        return;
    }
    if ( $b == 0 ) {
        echo "charlie" . PHP_EOL;
        return;
    }
        echo "zulu" . PHP_EOL;
?>



<?php
    $size = fgets(STDIN);
    
    for ( $i = 0; $i < $size; $i++ ) {
        echo implode(' ', range(1, $size)) . PHP_EOL;
    }
?>
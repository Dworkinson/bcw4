<?php
    function fibonacci($val) {
        if ( $val == 0 ) {
            return 0;
        }
        if ( $val == 1 || $val == -1 ) {
            return 1;
        }
        if ( $val < 0 ) {
            return fibonacci($val-1) + fibonacci($val-2);
        }
        return fibonacci($val-1) + fibonacci($val-2);
    }

    $val = fgets(STDIN);
    echo fibonacci($val) . PHP_EOL;
?>
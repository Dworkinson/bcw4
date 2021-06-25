<?php
    function factorial($val) {
        if ( $val <= 1 ) {
            if ( $val < 0) {
                return -1;
            }
            return 1;
        }
        return factorial($val - 1) * $val;
    }
    
    $val = fgets(STDIN);
    echo factorial($val) . PHP_EOL;
?>
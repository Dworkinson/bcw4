<?php
    function gcd($a, $b) {
        if ( $b == 0 ) {
            return $a;
        }
        return gcd($b, $a % $b);
    }

    function lcm ($a, $b, $gcd) {
        return ($a / $gcd) * $b;
    }

    $f = fopen("task.in", "r");
    $array = array ();
    while (($val = fgets($f)) !== false ) {
        $array = explode(" ", $val);
    }
    fclose ($f);
    file_put_contents("task.out", lcm($array[0], $array[1], gcd($array[0], $array[1])) . PHP_EOL);
?>

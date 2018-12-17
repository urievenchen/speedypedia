<?php
/*
      ###############################################
      # PHP Sources for Speedy Net                  #
      # By Uri Rodberg, Speedy Net                  #
      # http://www.speedy.net/                      #
      # uri@speedy.net                              #
      ###############################################
*/

include_once('include.inc');

$tmp_host= strtolower($GLOBALS['SPEEDY_GLOBAL_VARS']['HTTP_HOST_ONLY']);
$tmp_tok= strtok($tmp_host, '.');
$tmp_name_4= '';
$tmp_name_3= '';
$tmp_name_2= '';
$tmp_name_1= '';
$tmp_name= '';
$tmp_alt_name= '';
$tmp_brand_name= '';

while (!($tmp_tok === FALSE)) {
    $tmp_name_4= $tmp_name_3;
    $tmp_name_3= $tmp_name_2;
    $tmp_name_2= $tmp_name_1;
    $tmp_name_1= $tmp_tok;
    $tmp_tok = strtok('.');
}

if (strlen($tmp_name_1) == 2) {
    $tmp_name= $tmp_name_3;

    if ($tmp_name === 'speedy') {
        $tmp_canonical_name= ((strlen($tmp_name_4) > 0) ? $tmp_name_4 : 'www') . '.' . $tmp_name_3 . '.' . $tmp_name_2 . '.' . $tmp_name_1;
    } else {
        $tmp_canonical_name= 'www' . '.' . $tmp_name_3 . '.' . $tmp_name_2 . '.' . $tmp_name_1;
    }
} else {
    $tmp_name= $tmp_name_2;

    if ($tmp_name === 'speedy') {
        $tmp_canonical_name= ((strlen($tmp_name_3) > 0) ? $tmp_name_3 : 'www') . '.' . $tmp_name_2 . '.' . $tmp_name_1;
    } else {
        $tmp_canonical_name= 'www' . '.' . $tmp_name_2 . '.' . $tmp_name_1;
    }
}

// Allow only www.speedypedia.info as HTTP_HOST_ONLY.
if (!($GLOBALS['SPEEDY_GLOBAL_VARS']['HTTP_HOST_ONLY'] === 'www.speedypedia.info')) {
    header('HTTP/1.1 301 Moved Permanently');
    header('Location: http://www.speedypedia.info/');
    exit;
}

if (!($GLOBALS['SPEEDY_GLOBAL_VARS']['HTTP_HOST_ONLY'] === $tmp_canonical_name)) {
    header('HTTP/1.1 301 Moved Permanently');
    header('Location: http://' . $tmp_canonical_name . '/');
    exit;
}

if (!($_SERVER['REQUEST_URI'] === '/')) {
    header('HTTP/1.1 301 Moved Permanently');
    header('Location: http://' . $tmp_canonical_name . '/');
    exit;
}

$tmp_brand_name = "Speedypedia [alpha]";

header('Content-Type: text/html; charset=UTF-8');

$hebrew_he = "עברית";
$hebrew_alpha = "אלפא";

?>
<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
    <title><?php echo($tmp_brand_name); ?></title>
    <link rel="stylesheet" type="text/css" href="/main.css" />
    <link rel="apple-touch-icon" sizes="60x60" href="/images/icons/apple-touch-icon-60x60.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/images/icons/apple-touch-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="76x76" href="/images/icons/apple-touch-icon-76x76.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/images/icons/apple-touch-icon-114x114.png">
    <link rel="apple-touch-icon" sizes="120x120" href="/images/icons/apple-touch-icon-120x120.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/images/icons/apple-touch-icon-144x144.png">
    <link rel="apple-touch-icon" sizes="152x152" href="/images/icons/apple-touch-icon-152x152.png">
    <link rel="apple-touch-icon" sizes="180x180" href="/images/icons/apple-touch-icon-180x180.png">
    <link rel="icon" type="image/png" href="/images/icons/favicon-32x32.png" sizes="32x32">
    <link rel="icon" type="image/png" href="/images/icons/favicon-194x194.png" sizes="194x194">
    <link rel="icon" type="image/png" href="/images/icons/favicon-96x96.png" sizes="96x96">
    <link rel="icon" type="image/png" href="/images/icons/android-chrome-192x192.png" sizes="192x192">
    <link rel="icon" type="image/png" href="/images/icons/favicon-16x16.png" sizes="16x16">
    <link rel="manifest" href="/manifest.json">
    <link rel="mask-icon" href="/images/icons/safari-pinned-tab.svg" color="#5bbad5">
    <meta name="msapplication-TileColor" content="#da532c">
    <meta name="msapplication-TileImage" content="/images/icons/mstile-144x144.png">
    <meta name="theme-color" content="#b2cafa">
    <script type="text/javascript">
        if (top != self) {
            top.location = self.location;
        }
    </script>
</head>
<body text="#000000" link="#0000CC" vlink="#0000CC" alink="#FF0000" bgcolor="#FFFFFF">
<center>
    <div id="top-gradient"></div>
    <a href="http://www.speedypedia.info/" title="Speedypedia" target="_top"><img class="main-logo" src="http://www.speedypedia.info/images/speedypedia_logo_381x93_1a.png" alt="Speedypedia" /></a><br />
    <br />
    <table border="0" cellspacing="20" cellpadding="0" dir="ltr">
        <tr>
            <td dir="ltr">
                <a class="wiki-link" href="http://en.speedypedia.info/" title="English [alpha]" target="_top">English<span> [alpha]</span></a>
            </td>
            <td dir="rtl">
                <a class="wiki-link" href="http://he.speedypedia.info/" title="עברית [אלפא]" target="_top"><?php echo $hebrew_he; ?> <span> [<?php echo $hebrew_alpha; ?>]</span></a>
            </td>
        </tr>
    </table>
    <br />
    <img class="main-image" src="http://www.speedypedia.info/images/hands.png" alt="hands" />
    <br />
    <br />
    <br />
    <br />
    <!-- Facebook Badge START -->
    <a class="speedy-bottom-badge-link" href="https://www.facebook.com/speedyevenchen" target="_top" title="Speedy">Speedy</a>
    <br>
    <a href="https://www.facebook.com/speedyevenchen" target="_top" title="Speedy">
        <img class="fb-badge" src="http://badge.facebook.com/badge/110275029046282.1598.135831057.png" style="border: 0px;">
    </a>
    <br>
    <!-- Facebook Badge END -->
    <br />
</center>
</body>
</html>

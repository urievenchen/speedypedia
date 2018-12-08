<?php
/*
      ###############################################
      # PHP Sources for Speedy Net                  #
      # By Uri Rodberg, Speedy Net                  #
      # http://www.speedy.net/                      #
      # uri@speedy.net                              #
      ###############################################
*/

// This file should be included in all Speedy Net PHP scripts.

// Script commands: (script must be included only once).
{
   // Report all errors.
   error_reporting(E_ALL);

   // Init random number generator.
   srand((double)microtime()*1000000);

   // Init global variables.
   include_once('init_variables.inc');
}

Function PrintBody()
{
   echo '<body';
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_TEXT_COLOR']) > 0)
   {
      echo ' text="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_TEXT_COLOR'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_LINK_COLOR']) > 0)
   {
      echo ' link="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_LINK_COLOR'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_VLINK_COLOR']) > 0)
   {
      echo ' vlink="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_VLINK_COLOR'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_ALINK_COLOR']) > 0)
   {
      echo ' alink="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_ALINK_COLOR'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_BG_COLOR']) > 0)
   {
      echo ' bgcolor="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_BG_COLOR'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_BACKGROUND']) > 0)
   {
      echo ' background="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_BACKGROUND'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_TOPMARGIN']) > 0)
   {
      echo ' topmargin="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_TOPMARGIN'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_LEFTMARGIN']) > 0)
   {
      echo ' leftmargin="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_LEFTMARGIN'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_MARGINHEIGHT']) > 0)
   {
      echo ' marginheight="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_MARGINHEIGHT'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_MARGINWIDTH']) > 0)
   {
      echo ' marginwidth="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['BODY_MARGINWIDTH'] . '"';
   }
   echo '>';
}

Function PrintFontBegin()
{
   echo '<font';
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_FACE']) > 0)
   {
      echo ' face="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_FACE'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_SIZE']) > 0)
   {
      echo ' size="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_SIZE'] . '"';
   }
   if (strlen($GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_COLOR']) > 0)
   {
      echo ' color="' . $GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_COLOR'] . '"';
   }
   echo '>';
   if ($GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_BOLD'])
   {
      echo '<b>';
   }
   if ($GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_UNDERLINE'])
   {
      echo '<u>';
   }
}

Function PrintFontEnd()
{
   if ($GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_UNDERLINE'])
   {
      echo '</u>';
   }
   if ($GLOBALS['SPEEDY_GLOBAL_VARS']['FONT_BOLD'])
   {
      echo '</b>';
   }
   echo '</font>';
}

Function PrintHebrewParagraph($fp_text, $fp_br_number)
{
   PrintFontBegin();
   echo $fp_text;
   PrintFontEnd();
   for ($tmp_index_1= 0; $tmp_index_1 < $fp_br_number; $tmp_index_1++)
   {
      echo '<br />' . "\n";
   }
}

Function RedirectToLocation($fp_location)
{
   header('HTTP/1.1 301 Moved Permanently');
   header('Location: ' . $fp_location);
   exit;
}

Function EmbedMusic($fp_midi)
{
   echo '<embed src="' . $fp_midi . '" type="audio/midi" loop="false" autostart="true" hidden="true" ShowControls="false">' . "\n";
}

Function AllHtmlSpecialChars($fp_string)
{
   // Call htmlspecialchars() with ENT_QUOTES.
   return(htmlspecialchars($fp_string, ENT_QUOTES));
}

Function GetStringFromHTTP($fp_string)
{
   // Return string without slashes.
   // Assume magic_quotes_gpc is on.
   return(stripslashes($fp_string));
}

Function EmailIsValid($fp_email)
{
   // Return true if email address is valid (no special characters allowed).
   if (eregi('^[_a-z0-9-]+(\.[_a-z0-9-]+)*@[a-z0-9-]+(\.[a-z0-9-]+)*(\.[a-z]{2,})$', $fp_email))
   {
      return(true);
   }
   else
   {
      return(false);
   }
}

?>


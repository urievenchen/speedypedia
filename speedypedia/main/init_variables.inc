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

// Init global variables.

// Script commands: (script must be included only once).
{
   // Define global variables.
   $GLOBALS['SPEEDY_GLOBAL_VARS']['HTTP_HOST']=                        @$_SERVER['HTTP_HOST'];
   $GLOBALS['SPEEDY_GLOBAL_VARS']['HTTP_REFERER']=                     @$_SERVER['HTTP_REFERER'];
   $GLOBALS['SPEEDY_GLOBAL_VARS']['REMOTE_ADDR']=                      @$_SERVER['REMOTE_ADDR'];
   $GLOBALS['SPEEDY_GLOBAL_VARS']['SCRIPT_FILENAME']=                  @$_SERVER['SCRIPT_FILENAME'];
   $GLOBALS['SPEEDY_GLOBAL_VARS']['REQUEST_URI']=                      @$_SERVER['REQUEST_URI'];
   $GLOBALS['SPEEDY_GLOBAL_VARS']['HTTP_HOST_ONLY']=                   strtok($GLOBALS['SPEEDY_GLOBAL_VARS']['HTTP_HOST'], ':');

   $GLOBALS['SPEEDY_GLOBAL_VARS']['RLM']= '&rlm;';
   $GLOBALS['SPEEDY_GLOBAL_VARS']['LRM']= '&lrm;';

   // If these variables are not defined – define them with default values.

   if (!(@isset($GLOBALS['SPEEDY_GLOBAL_VARS']['PAGE_NAME'])))
   {
      $GLOBALS['SPEEDY_GLOBAL_VARS']['PAGE_NAME']= $GLOBALS['SPEEDY_GLOBAL_VARS']['SCRIPT_FILENAME'];
   }

   if (!(@isset($GLOBALS['SPEEDY_GLOBAL_VARS']['TOP_BANNER'])))
   {
      $GLOBALS['SPEEDY_GLOBAL_VARS']['TOP_BANNER']= '';
   }

   if (!(@isset($GLOBALS['SPEEDY_GLOBAL_VARS']['KEYWORDS'])))
   {
      $GLOBALS['SPEEDY_GLOBAL_VARS']['KEYWORDS']= '';
   }

   if (!(@isset($GLOBALS['SPEEDY_GLOBAL_VARS']['ROBOTS'])))
   {
      $GLOBALS['SPEEDY_GLOBAL_VARS']['ROBOTS']= '';
   }

   if (!(@isset($GLOBALS['SPEEDY_GLOBAL_VARS']['SPEEDY_NET_PART'])))
   {
      $GLOBALS['SPEEDY_GLOBAL_VARS']['SPEEDY_NET_PART']= '';
   }

   if (!(@isset($GLOBALS['SPEEDY_GLOBAL_VARS']['TOP_LINKS_STYLE'])))
   {
      $GLOBALS['SPEEDY_GLOBAL_VARS']['TOP_LINKS_STYLE']= 0;
   }

   $GLOBALS['SPEEDY_GLOBAL_VARS']['CURRENT_USER']= '';
   $GLOBALS['SPEEDY_GLOBAL_VARS']['CURRENT_USER_EXISTS']= FALSE;
   $GLOBALS['SPEEDY_GLOBAL_VARS']['GET_USER_DETAILS']= FALSE;
   $GLOBALS['SPEEDY_GLOBAL_VARS']['CHECK_USER_MAIL']= FALSE;

}

?>


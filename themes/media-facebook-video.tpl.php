<?php

/**
 * Template file for theme('media_facebook_video').
 */

/**
 * Variables available:
 *  $uri - The media uri for the Facebook video (e.g., facebook://v/xsy7x8c9).
 *  $video_id - The unique identifier of the Facebook video (e.g., xsy7x8c9).
 *  $id - The file entity ID (fid).
 *  $url - The full url including query options for the Facebook iframe.
 *  $options - An array containing the Media Facebook formatter options.
 *  $api_id_attribute - An id attribute if the Javascript API is enabled;
 *  otherwise NULL.
 *  $width - The width value set in Media: Facebook file display options.
 */
?>
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.3";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<div class="<?php print $classes; ?> media-facebook-<?php print $id; ?>">
  <div class="fb-video" data-allowfullscreen="true" data-href="<?php print $url; ?>">
  <div class="fb-xfbml-parse-ignore">
</div>

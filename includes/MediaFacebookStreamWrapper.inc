<?php

/**
 *  @file
 *  Extends the MediaReadOnlyStreamWrapper class to handle Facebook videos.
 */

/**
 *  Create an instance like this:
 *  $facebook = new MediaFacebookStreamWrapper('facebook://v/[video-code]');
 */
class MediaFacebookStreamWrapper extends MediaReadOnlyStreamWrapper {
  protected $base_url = 'http://facebook.com';

  static function getMimeType($uri, $mapping = NULL) {
    return 'video/facebook';
  }

  function interpolateUrl() {
    if ($parameters = $this->get_parameters()) {
      return $this->base_url . '/' . $parameters['v'];
    }
  }

  function getLocalThumbnailPath() {
    $parts = $this->get_parameters();
    $local_path = 'public://media-facebook/' . check_plain($parts['v']) . '.jpg';
    return $local_path;
  }
}

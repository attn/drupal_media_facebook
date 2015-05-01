<?php

/**
 * @file
 * Extends the MediaReadOnlyStreamWrapper class to handle Facebook videos.
 */

/**
 * Creates a "new MediaFacebookStreamWrapper('facebook://v/[video-code]')".
 */
class MediaFacebookStreamWrapper extends MediaReadOnlyStreamWrapper {
  protected $baseUrl = 'http://facebook.com';

  /**
   * Gets Mime Type.
   */
  public function getMimeType($uri, $mapping = NULL) {
    return 'video/facebook';
  }

  /**
   * Interpolates URL.
   */
  public function interpolateUrl() {
    if ($parameters = $this->get_parameters()) {
      return $this->baseUrl . '/' . $parameters['v'];
    }
  }

  /**
   * Get Local Thumbnail Path.
   */
  public function getLocalThumbnailPath() {
    $parts = $this->get_parameters();
    $local_path = 'public://media-facebook/' . check_plain($parts['v']) . '.jpg';
    return $local_path;
  }

}

/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.PinterestSdk);
  }
}(this, function(expect, PinterestSdk) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new PinterestSdk.PinMediaSource();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('PinMediaSource', function() {
    it('should create an instance of PinMediaSource', function() {
      // uncomment below and update the code to test PinMediaSource
      //var instance = new PinterestSdk.PinMediaSource();
      //expect(instance).to.be.a(PinterestSdk.PinMediaSource);
    });

    it('should have the property sourceType (base name: "source_type")', function() {
      // uncomment below and update the code to test the property sourceType
      //var instance = new PinterestSdk.PinMediaSource();
      //expect(instance).to.be();
    });

    it('should have the property contentType (base name: "content_type")', function() {
      // uncomment below and update the code to test the property contentType
      //var instance = new PinterestSdk.PinMediaSource();
      //expect(instance).to.be();
    });

    it('should have the property data (base name: "data")', function() {
      // uncomment below and update the code to test the property data
      //var instance = new PinterestSdk.PinMediaSource();
      //expect(instance).to.be();
    });

    it('should have the property url (base name: "url")', function() {
      // uncomment below and update the code to test the property url
      //var instance = new PinterestSdk.PinMediaSource();
      //expect(instance).to.be();
    });

    it('should have the property coverImageUrl (base name: "cover_image_url")', function() {
      // uncomment below and update the code to test the property coverImageUrl
      //var instance = new PinterestSdk.PinMediaSource();
      //expect(instance).to.be();
    });

    it('should have the property mediaId (base name: "media_id")', function() {
      // uncomment below and update the code to test the property mediaId
      //var instance = new PinterestSdk.PinMediaSource();
      //expect(instance).to.be();
    });

  });

}));
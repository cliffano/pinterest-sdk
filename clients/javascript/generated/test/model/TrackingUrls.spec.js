/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
    instance = new PinterestSdk.TrackingUrls();
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

  describe('TrackingUrls', function() {
    it('should create an instance of TrackingUrls', function() {
      // uncomment below and update the code to test TrackingUrls
      //var instance = new PinterestSdk.TrackingUrls();
      //expect(instance).to.be.a(PinterestSdk.TrackingUrls);
    });

    it('should have the property impression (base name: "impression")', function() {
      // uncomment below and update the code to test the property impression
      //var instance = new PinterestSdk.TrackingUrls();
      //expect(instance).to.be();
    });

    it('should have the property click (base name: "click")', function() {
      // uncomment below and update the code to test the property click
      //var instance = new PinterestSdk.TrackingUrls();
      //expect(instance).to.be();
    });

    it('should have the property engagement (base name: "engagement")', function() {
      // uncomment below and update the code to test the property engagement
      //var instance = new PinterestSdk.TrackingUrls();
      //expect(instance).to.be();
    });

    it('should have the property buyableButton (base name: "buyable_button")', function() {
      // uncomment below and update the code to test the property buyableButton
      //var instance = new PinterestSdk.TrackingUrls();
      //expect(instance).to.be();
    });

    it('should have the property audienceVerification (base name: "audience_verification")', function() {
      // uncomment below and update the code to test the property audienceVerification
      //var instance = new PinterestSdk.TrackingUrls();
      //expect(instance).to.be();
    });

  });

}));

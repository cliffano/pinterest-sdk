/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
    instance = new PinterestSdk.QuizPinResult();
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

  describe('QuizPinResult', function() {
    it('should create an instance of QuizPinResult', function() {
      // uncomment below and update the code to test QuizPinResult
      //var instance = new PinterestSdk.QuizPinResult();
      //expect(instance).to.be.a(PinterestSdk.QuizPinResult);
    });

    it('should have the property organicPinId (base name: "organic_pin_id")', function() {
      // uncomment below and update the code to test the property organicPinId
      //var instance = new PinterestSdk.QuizPinResult();
      //expect(instance).to.be();
    });

    it('should have the property androidDeepLink (base name: "android_deep_link")', function() {
      // uncomment below and update the code to test the property androidDeepLink
      //var instance = new PinterestSdk.QuizPinResult();
      //expect(instance).to.be();
    });

    it('should have the property iosDeepLink (base name: "ios_deep_link")', function() {
      // uncomment below and update the code to test the property iosDeepLink
      //var instance = new PinterestSdk.QuizPinResult();
      //expect(instance).to.be();
    });

    it('should have the property destinationUrl (base name: "destination_url")', function() {
      // uncomment below and update the code to test the property destinationUrl
      //var instance = new PinterestSdk.QuizPinResult();
      //expect(instance).to.be();
    });

    it('should have the property resultId (base name: "result_id")', function() {
      // uncomment below and update the code to test the property resultId
      //var instance = new PinterestSdk.QuizPinResult();
      //expect(instance).to.be();
    });

  });

}));

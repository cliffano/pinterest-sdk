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
    instance = new PinterestSdk.GoogleProductCategory6Filter();
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

  describe('GoogleProductCategory6Filter', function() {
    it('should create an instance of GoogleProductCategory6Filter', function() {
      // uncomment below and update the code to test GoogleProductCategory6Filter
      //var instance = new PinterestSdk.GoogleProductCategory6Filter();
      //expect(instance).to.be.a(PinterestSdk.GoogleProductCategory6Filter);
    });

    it('should have the property gOOGLEPRODUCTCATEGORY6 (base name: "GOOGLE_PRODUCT_CATEGORY_6")', function() {
      // uncomment below and update the code to test the property gOOGLEPRODUCTCATEGORY6
      //var instance = new PinterestSdk.GoogleProductCategory6Filter();
      //expect(instance).to.be();
    });

  });

}));

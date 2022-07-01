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
    instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
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

  describe('CatalogsFeedsUpdateRequest', function() {
    it('should create an instance of CatalogsFeedsUpdateRequest', function() {
      // uncomment below and update the code to test CatalogsFeedsUpdateRequest
      //var instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
      //expect(instance).to.be.a(PinterestSdk.CatalogsFeedsUpdateRequest);
    });

    it('should have the property defaultAvailability (base name: "default_availability")', function() {
      // uncomment below and update the code to test the property defaultAvailability
      //var instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
      //expect(instance).to.be();
    });

    it('should have the property defaultCurrency (base name: "default_currency")', function() {
      // uncomment below and update the code to test the property defaultCurrency
      //var instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
      //expect(instance).to.be();
    });

    it('should have the property format (base name: "format")', function() {
      // uncomment below and update the code to test the property format
      //var instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
      //expect(instance).to.be();
    });

    it('should have the property credentials (base name: "credentials")', function() {
      // uncomment below and update the code to test the property credentials
      //var instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
      //expect(instance).to.be();
    });

    it('should have the property location (base name: "location")', function() {
      // uncomment below and update the code to test the property location
      //var instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
      //expect(instance).to.be();
    });

    it('should have the property preferredProcessingSchedule (base name: "preferred_processing_schedule")', function() {
      // uncomment below and update the code to test the property preferredProcessingSchedule
      //var instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
      //expect(instance).to.be();
    });

    it('should have the property status (base name: "status")', function() {
      // uncomment below and update the code to test the property status
      //var instance = new PinterestSdk.CatalogsFeedsUpdateRequest();
      //expect(instance).to.be();
    });

  });

}));

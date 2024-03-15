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
    instance = new PinterestSdk.ItemResponseAnyOf();
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

  describe('ItemResponseAnyOf', function() {
    it('should create an instance of ItemResponseAnyOf', function() {
      // uncomment below and update the code to test ItemResponseAnyOf
      //var instance = new PinterestSdk.ItemResponseAnyOf();
      //expect(instance).to.be.a(PinterestSdk.ItemResponseAnyOf);
    });

    it('should have the property catalogType (base name: "catalog_type")', function() {
      // uncomment below and update the code to test the property catalogType
      //var instance = new PinterestSdk.ItemResponseAnyOf();
      //expect(instance).to.be();
    });

    it('should have the property itemId (base name: "item_id")', function() {
      // uncomment below and update the code to test the property itemId
      //var instance = new PinterestSdk.ItemResponseAnyOf();
      //expect(instance).to.be();
    });

    it('should have the property pins (base name: "pins")', function() {
      // uncomment below and update the code to test the property pins
      //var instance = new PinterestSdk.ItemResponseAnyOf();
      //expect(instance).to.be();
    });

    it('should have the property attributes (base name: "attributes")', function() {
      // uncomment below and update the code to test the property attributes
      //var instance = new PinterestSdk.ItemResponseAnyOf();
      //expect(instance).to.be();
    });

    it('should have the property hotelId (base name: "hotel_id")', function() {
      // uncomment below and update the code to test the property hotelId
      //var instance = new PinterestSdk.ItemResponseAnyOf();
      //expect(instance).to.be();
    });

  });

}));

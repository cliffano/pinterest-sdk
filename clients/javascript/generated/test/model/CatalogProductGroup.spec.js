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
    instance = new PinterestSdk.CatalogProductGroup();
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

  describe('CatalogProductGroup', function() {
    it('should create an instance of CatalogProductGroup', function() {
      // uncomment below and update the code to test CatalogProductGroup
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be.a(PinterestSdk.CatalogProductGroup);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property merchantId (base name: "merchant_id")', function() {
      // uncomment below and update the code to test the property merchantId
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property filters (base name: "filters")', function() {
      // uncomment below and update the code to test the property filters
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property filterV2 (base name: "filter_v2")', function() {
      // uncomment below and update the code to test the property filterV2
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property status (base name: "status")', function() {
      // uncomment below and update the code to test the property status
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property feedProfileId (base name: "feed_profile_id")', function() {
      // uncomment below and update the code to test the property feedProfileId
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property createdAt (base name: "created_at")', function() {
      // uncomment below and update the code to test the property createdAt
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property lastUpdate (base name: "last_update")', function() {
      // uncomment below and update the code to test the property lastUpdate
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property productCount (base name: "product_count")', function() {
      // uncomment below and update the code to test the property productCount
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

    it('should have the property featuredPosition (base name: "featured_position")', function() {
      // uncomment below and update the code to test the property featuredPosition
      //var instance = new PinterestSdk.CatalogProductGroup();
      //expect(instance).to.be();
    });

  });

}));

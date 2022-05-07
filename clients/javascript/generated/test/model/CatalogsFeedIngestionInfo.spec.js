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
    instance = new PinterestSdk.CatalogsFeedIngestionInfo();
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

  describe('CatalogsFeedIngestionInfo', function() {
    it('should create an instance of CatalogsFeedIngestionInfo', function() {
      // uncomment below and update the code to test CatalogsFeedIngestionInfo
      //var instance = new PinterestSdk.CatalogsFeedIngestionInfo();
      //expect(instance).to.be.a(PinterestSdk.CatalogsFeedIngestionInfo);
    });

    it('should have the property inStock (base name: "in_stock")', function() {
      // uncomment below and update the code to test the property inStock
      //var instance = new PinterestSdk.CatalogsFeedIngestionInfo();
      //expect(instance).to.be();
    });

    it('should have the property outOfStock (base name: "out_of_stock")', function() {
      // uncomment below and update the code to test the property outOfStock
      //var instance = new PinterestSdk.CatalogsFeedIngestionInfo();
      //expect(instance).to.be();
    });

    it('should have the property preorder (base name: "preorder")', function() {
      // uncomment below and update the code to test the property preorder
      //var instance = new PinterestSdk.CatalogsFeedIngestionInfo();
      //expect(instance).to.be();
    });

  });

}));

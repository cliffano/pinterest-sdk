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
    factory(root.expect, root.PinterestRestApi);
  }
}(this, function(expect, PinterestRestApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new PinterestRestApi.CatalogsProductGroupPricingCriteria();
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

  describe('CatalogsProductGroupPricingCriteria', function() {
    it('should create an instance of CatalogsProductGroupPricingCriteria', function() {
      // uncomment below and update the code to test CatalogsProductGroupPricingCriteria
      //var instance = new PinterestRestApi.CatalogsProductGroupPricingCriteria();
      //expect(instance).to.be.a(PinterestRestApi.CatalogsProductGroupPricingCriteria);
    });

    it('should have the property inclusion (base name: "inclusion")', function() {
      // uncomment below and update the code to test the property inclusion
      //var instance = new PinterestRestApi.CatalogsProductGroupPricingCriteria();
      //expect(instance).to.be();
    });

    it('should have the property values (base name: "values")', function() {
      // uncomment below and update the code to test the property values
      //var instance = new PinterestRestApi.CatalogsProductGroupPricingCriteria();
      //expect(instance).to.be();
    });

    it('should have the property negated (base name: "negated")', function() {
      // uncomment below and update the code to test the property negated
      //var instance = new PinterestRestApi.CatalogsProductGroupPricingCriteria();
      //expect(instance).to.be();
    });

  });

}));

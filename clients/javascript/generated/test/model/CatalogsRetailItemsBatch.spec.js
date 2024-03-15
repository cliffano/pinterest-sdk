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
    instance = new PinterestSdk.CatalogsRetailItemsBatch();
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

  describe('CatalogsRetailItemsBatch', function() {
    it('should create an instance of CatalogsRetailItemsBatch', function() {
      // uncomment below and update the code to test CatalogsRetailItemsBatch
      //var instance = new PinterestSdk.CatalogsRetailItemsBatch();
      //expect(instance).to.be.a(PinterestSdk.CatalogsRetailItemsBatch);
    });

    it('should have the property batchId (base name: "batch_id")', function() {
      // uncomment below and update the code to test the property batchId
      //var instance = new PinterestSdk.CatalogsRetailItemsBatch();
      //expect(instance).to.be();
    });

    it('should have the property createdTime (base name: "created_time")', function() {
      // uncomment below and update the code to test the property createdTime
      //var instance = new PinterestSdk.CatalogsRetailItemsBatch();
      //expect(instance).to.be();
    });

    it('should have the property completedTime (base name: "completed_time")', function() {
      // uncomment below and update the code to test the property completedTime
      //var instance = new PinterestSdk.CatalogsRetailItemsBatch();
      //expect(instance).to.be();
    });

    it('should have the property status (base name: "status")', function() {
      // uncomment below and update the code to test the property status
      //var instance = new PinterestSdk.CatalogsRetailItemsBatch();
      //expect(instance).to.be();
    });

    it('should have the property catalogType (base name: "catalog_type")', function() {
      // uncomment below and update the code to test the property catalogType
      //var instance = new PinterestSdk.CatalogsRetailItemsBatch();
      //expect(instance).to.be();
    });

    it('should have the property items (base name: "items")', function() {
      // uncomment below and update the code to test the property items
      //var instance = new PinterestSdk.CatalogsRetailItemsBatch();
      //expect(instance).to.be();
    });

  });

}));
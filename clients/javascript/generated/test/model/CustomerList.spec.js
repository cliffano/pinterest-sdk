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
    instance = new PinterestSdk.CustomerList();
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

  describe('CustomerList', function() {
    it('should create an instance of CustomerList', function() {
      // uncomment below and update the code to test CustomerList
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be.a(PinterestSdk.CustomerList);
    });

    it('should have the property adAccountId (base name: "ad_account_id")', function() {
      // uncomment below and update the code to test the property adAccountId
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property createdTime (base name: "created_time")', function() {
      // uncomment below and update the code to test the property createdTime
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property numBatches (base name: "num_batches")', function() {
      // uncomment below and update the code to test the property numBatches
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property numRemovedUserRecords (base name: "num_removed_user_records")', function() {
      // uncomment below and update the code to test the property numRemovedUserRecords
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property numUploadedUserRecords (base name: "num_uploaded_user_records")', function() {
      // uncomment below and update the code to test the property numUploadedUserRecords
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property status (base name: "status")', function() {
      // uncomment below and update the code to test the property status
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property updatedTime (base name: "updated_time")', function() {
      // uncomment below and update the code to test the property updatedTime
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

    it('should have the property exceptions (base name: "exceptions")', function() {
      // uncomment below and update the code to test the property exceptions
      //var instance = new PinterestSdk.CustomerList();
      //expect(instance).to.be();
    });

  });

}));

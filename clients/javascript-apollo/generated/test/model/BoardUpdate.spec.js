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
    factory(root.expect, root.PinterestRestApi);
  }
}(this, function(expect, PinterestRestApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new PinterestRestApi.BoardUpdate();
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

  describe('BoardUpdate', function() {
    it('should create an instance of BoardUpdate', function() {
      // uncomment below and update the code to test BoardUpdate
      //var instance = new PinterestRestApi.BoardUpdate();
      //expect(instance).to.be.a(PinterestRestApi.BoardUpdate);
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instance = new PinterestRestApi.BoardUpdate();
      //expect(instance).to.be();
    });

    it('should have the property description (base name: "description")', function() {
      // uncomment below and update the code to test the property description
      //var instance = new PinterestRestApi.BoardUpdate();
      //expect(instance).to.be();
    });

    it('should have the property privacy (base name: "privacy")', function() {
      // uncomment below and update the code to test the property privacy
      //var instance = new PinterestRestApi.BoardUpdate();
      //expect(instance).to.be();
    });

  });

}));

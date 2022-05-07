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
    instance = new PinterestRestApi.Paginated();
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

  describe('Paginated', function() {
    it('should create an instance of Paginated', function() {
      // uncomment below and update the code to test Paginated
      //var instance = new PinterestRestApi.Paginated();
      //expect(instance).to.be.a(PinterestRestApi.Paginated);
    });

    it('should have the property items (base name: "items")', function() {
      // uncomment below and update the code to test the property items
      //var instance = new PinterestRestApi.Paginated();
      //expect(instance).to.be();
    });

    it('should have the property bookmark (base name: "bookmark")', function() {
      // uncomment below and update the code to test the property bookmark
      //var instance = new PinterestRestApi.Paginated();
      //expect(instance).to.be();
    });

  });

}));

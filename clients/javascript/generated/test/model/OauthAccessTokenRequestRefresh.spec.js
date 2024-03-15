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
    instance = new PinterestSdk.OauthAccessTokenRequestRefresh();
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

  describe('OauthAccessTokenRequestRefresh', function() {
    it('should create an instance of OauthAccessTokenRequestRefresh', function() {
      // uncomment below and update the code to test OauthAccessTokenRequestRefresh
      //var instance = new PinterestSdk.OauthAccessTokenRequestRefresh();
      //expect(instance).to.be.a(PinterestSdk.OauthAccessTokenRequestRefresh);
    });

    it('should have the property refreshToken (base name: "refresh_token")', function() {
      // uncomment below and update the code to test the property refreshToken
      //var instance = new PinterestSdk.OauthAccessTokenRequestRefresh();
      //expect(instance).to.be();
    });

    it('should have the property scope (base name: "scope")', function() {
      // uncomment below and update the code to test the property scope
      //var instance = new PinterestSdk.OauthAccessTokenRequestRefresh();
      //expect(instance).to.be();
    });

    it('should have the property refreshOn (base name: "refresh_on")', function() {
      // uncomment below and update the code to test the property refreshOn
      //var instance = new PinterestSdk.OauthAccessTokenRequestRefresh();
      //expect(instance).to.be();
    });

  });

}));

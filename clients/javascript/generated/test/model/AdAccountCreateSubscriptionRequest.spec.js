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
    instance = new PinterestSdk.AdAccountCreateSubscriptionRequest();
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

  describe('AdAccountCreateSubscriptionRequest', function() {
    it('should create an instance of AdAccountCreateSubscriptionRequest', function() {
      // uncomment below and update the code to test AdAccountCreateSubscriptionRequest
      //var instance = new PinterestSdk.AdAccountCreateSubscriptionRequest();
      //expect(instance).to.be.a(PinterestSdk.AdAccountCreateSubscriptionRequest);
    });

    it('should have the property webhookUrl (base name: "webhook_url")', function() {
      // uncomment below and update the code to test the property webhookUrl
      //var instance = new PinterestSdk.AdAccountCreateSubscriptionRequest();
      //expect(instance).to.be();
    });

    it('should have the property leadFormId (base name: "lead_form_id")', function() {
      // uncomment below and update the code to test the property leadFormId
      //var instance = new PinterestSdk.AdAccountCreateSubscriptionRequest();
      //expect(instance).to.be();
    });

    it('should have the property partnerAccessToken (base name: "partner_access_token")', function() {
      // uncomment below and update the code to test the property partnerAccessToken
      //var instance = new PinterestSdk.AdAccountCreateSubscriptionRequest();
      //expect(instance).to.be();
    });

    it('should have the property partnerRefreshToken (base name: "partner_refresh_token")', function() {
      // uncomment below and update the code to test the property partnerRefreshToken
      //var instance = new PinterestSdk.AdAccountCreateSubscriptionRequest();
      //expect(instance).to.be();
    });

  });

}));

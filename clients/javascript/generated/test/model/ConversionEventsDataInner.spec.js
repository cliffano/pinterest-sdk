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
    instance = new PinterestSdk.ConversionEventsDataInner();
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

  describe('ConversionEventsDataInner', function() {
    it('should create an instance of ConversionEventsDataInner', function() {
      // uncomment below and update the code to test ConversionEventsDataInner
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be.a(PinterestSdk.ConversionEventsDataInner);
    });

    it('should have the property eventName (base name: "event_name")', function() {
      // uncomment below and update the code to test the property eventName
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property actionSource (base name: "action_source")', function() {
      // uncomment below and update the code to test the property actionSource
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property eventTime (base name: "event_time")', function() {
      // uncomment below and update the code to test the property eventTime
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property eventId (base name: "event_id")', function() {
      // uncomment below and update the code to test the property eventId
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property eventSourceUrl (base name: "event_source_url")', function() {
      // uncomment below and update the code to test the property eventSourceUrl
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property optOut (base name: "opt_out")', function() {
      // uncomment below and update the code to test the property optOut
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property partnerName (base name: "partner_name")', function() {
      // uncomment below and update the code to test the property partnerName
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property userData (base name: "user_data")', function() {
      // uncomment below and update the code to test the property userData
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property customData (base name: "custom_data")', function() {
      // uncomment below and update the code to test the property customData
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property appId (base name: "app_id")', function() {
      // uncomment below and update the code to test the property appId
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property appName (base name: "app_name")', function() {
      // uncomment below and update the code to test the property appName
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property appVersion (base name: "app_version")', function() {
      // uncomment below and update the code to test the property appVersion
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property deviceBrand (base name: "device_brand")', function() {
      // uncomment below and update the code to test the property deviceBrand
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property deviceCarrier (base name: "device_carrier")', function() {
      // uncomment below and update the code to test the property deviceCarrier
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property deviceModel (base name: "device_model")', function() {
      // uncomment below and update the code to test the property deviceModel
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property deviceType (base name: "device_type")', function() {
      // uncomment below and update the code to test the property deviceType
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property osVersion (base name: "os_version")', function() {
      // uncomment below and update the code to test the property osVersion
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property wifi (base name: "wifi")', function() {
      // uncomment below and update the code to test the property wifi
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

    it('should have the property language (base name: "language")', function() {
      // uncomment below and update the code to test the property language
      //var instance = new PinterestSdk.ConversionEventsDataInner();
      //expect(instance).to.be();
    });

  });

}));

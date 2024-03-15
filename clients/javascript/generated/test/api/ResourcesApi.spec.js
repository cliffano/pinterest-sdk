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
    instance = new PinterestSdk.ResourcesApi();
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

  describe('ResourcesApi', function() {
    describe('adAccountCountriesGet', function() {
      it('should call adAccountCountriesGet successfully', function(done) {
        //uncomment below and update the code to test adAccountCountriesGet
        //instance.adAccountCountriesGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('deliveryMetricsGet', function() {
      it('should call deliveryMetricsGet successfully', function(done) {
        //uncomment below and update the code to test deliveryMetricsGet
        //instance.deliveryMetricsGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('interestTargetingOptionsGet', function() {
      it('should call interestTargetingOptionsGet successfully', function(done) {
        //uncomment below and update the code to test interestTargetingOptionsGet
        //instance.interestTargetingOptionsGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('leadFormQuestionsGet', function() {
      it('should call leadFormQuestionsGet successfully', function(done) {
        //uncomment below and update the code to test leadFormQuestionsGet
        //instance.leadFormQuestionsGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('metricsReadyStateGet', function() {
      it('should call metricsReadyStateGet successfully', function(done) {
        //uncomment below and update the code to test metricsReadyStateGet
        //instance.metricsReadyStateGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('targetingOptionsGet', function() {
      it('should call targetingOptionsGet successfully', function(done) {
        //uncomment below and update the code to test targetingOptionsGet
        //instance.targetingOptionsGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));

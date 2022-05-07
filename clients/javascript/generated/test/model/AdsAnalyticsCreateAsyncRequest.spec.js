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
    instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
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

  describe('AdsAnalyticsCreateAsyncRequest', function() {
    it('should create an instance of AdsAnalyticsCreateAsyncRequest', function() {
      // uncomment below and update the code to test AdsAnalyticsCreateAsyncRequest
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be.a(PinterestSdk.AdsAnalyticsCreateAsyncRequest);
    });

    it('should have the property startDate (base name: "start_date")', function() {
      // uncomment below and update the code to test the property startDate
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property endDate (base name: "end_date")', function() {
      // uncomment below and update the code to test the property endDate
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property granularity (base name: "granularity")', function() {
      // uncomment below and update the code to test the property granularity
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property clickWindowDays (base name: "click_window_days")', function() {
      // uncomment below and update the code to test the property clickWindowDays
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property engagementWindowDays (base name: "engagement_window_days")', function() {
      // uncomment below and update the code to test the property engagementWindowDays
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property viewWindowDays (base name: "view_window_days")', function() {
      // uncomment below and update the code to test the property viewWindowDays
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property conversionReportTime (base name: "conversion_report_time")', function() {
      // uncomment below and update the code to test the property conversionReportTime
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property attributionTypes (base name: "attribution_types")', function() {
      // uncomment below and update the code to test the property attributionTypes
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property columns (base name: "columns")', function() {
      // uncomment below and update the code to test the property columns
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property level (base name: "level")', function() {
      // uncomment below and update the code to test the property level
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property reportFormat (base name: "report_format")', function() {
      // uncomment below and update the code to test the property reportFormat
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property campaignIds (base name: "campaign_ids")', function() {
      // uncomment below and update the code to test the property campaignIds
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property campaignStatuses (base name: "campaign_statuses")', function() {
      // uncomment below and update the code to test the property campaignStatuses
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property campaignObjectiveTypes (base name: "campaign_objective_types")', function() {
      // uncomment below and update the code to test the property campaignObjectiveTypes
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property adGroupIds (base name: "ad_group_ids")', function() {
      // uncomment below and update the code to test the property adGroupIds
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property adGroupStatuses (base name: "ad_group_statuses")', function() {
      // uncomment below and update the code to test the property adGroupStatuses
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property adIds (base name: "ad_ids")', function() {
      // uncomment below and update the code to test the property adIds
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property adStatuses (base name: "ad_statuses")', function() {
      // uncomment below and update the code to test the property adStatuses
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property productGroupIds (base name: "product_group_ids")', function() {
      // uncomment below and update the code to test the property productGroupIds
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property productGroupStatuses (base name: "product_group_statuses")', function() {
      // uncomment below and update the code to test the property productGroupStatuses
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property productItemIds (base name: "product_item_ids")', function() {
      // uncomment below and update the code to test the property productItemIds
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property targetingTypes (base name: "targeting_types")', function() {
      // uncomment below and update the code to test the property targetingTypes
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

    it('should have the property metricsFilters (base name: "metrics_filters")', function() {
      // uncomment below and update the code to test the property metricsFilters
      //var instance = new PinterestSdk.AdsAnalyticsCreateAsyncRequest();
      //expect(instance).to.be();
    });

  });

}));

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
    instance = new PinterestSdk.AdResponse();
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

  describe('AdResponse', function() {
    it('should create an instance of AdResponse', function() {
      // uncomment below and update the code to test AdResponse
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be.a(PinterestSdk.AdResponse);
    });

    it('should have the property adGroupId (base name: "ad_group_id")', function() {
      // uncomment below and update the code to test the property adGroupId
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property androidDeepLink (base name: "android_deep_link")', function() {
      // uncomment below and update the code to test the property androidDeepLink
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property carouselAndroidDeepLinks (base name: "carousel_android_deep_links")', function() {
      // uncomment below and update the code to test the property carouselAndroidDeepLinks
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property carouselDestinationUrls (base name: "carousel_destination_urls")', function() {
      // uncomment below and update the code to test the property carouselDestinationUrls
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property carouselIosDeepLinks (base name: "carousel_ios_deep_links")', function() {
      // uncomment below and update the code to test the property carouselIosDeepLinks
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property clickTrackingUrl (base name: "click_tracking_url")', function() {
      // uncomment below and update the code to test the property clickTrackingUrl
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property creativeType (base name: "creative_type")', function() {
      // uncomment below and update the code to test the property creativeType
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property destinationUrl (base name: "destination_url")', function() {
      // uncomment below and update the code to test the property destinationUrl
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property iosDeepLink (base name: "ios_deep_link")', function() {
      // uncomment below and update the code to test the property iosDeepLink
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property isPinDeleted (base name: "is_pin_deleted")', function() {
      // uncomment below and update the code to test the property isPinDeleted
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property isRemovable (base name: "is_removable")', function() {
      // uncomment below and update the code to test the property isRemovable
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property status (base name: "status")', function() {
      // uncomment below and update the code to test the property status
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property trackingUrls (base name: "tracking_urls")', function() {
      // uncomment below and update the code to test the property trackingUrls
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property viewTrackingUrl (base name: "view_tracking_url")', function() {
      // uncomment below and update the code to test the property viewTrackingUrl
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property leadFormId (base name: "lead_form_id")', function() {
      // uncomment below and update the code to test the property leadFormId
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property gridClickType (base name: "grid_click_type")', function() {
      // uncomment below and update the code to test the property gridClickType
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property customizableCtaType (base name: "customizable_cta_type")', function() {
      // uncomment below and update the code to test the property customizableCtaType
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property quizPinData (base name: "quiz_pin_data")', function() {
      // uncomment below and update the code to test the property quizPinData
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property pinId (base name: "pin_id")', function() {
      // uncomment below and update the code to test the property pinId
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property adAccountId (base name: "ad_account_id")', function() {
      // uncomment below and update the code to test the property adAccountId
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property campaignId (base name: "campaign_id")', function() {
      // uncomment below and update the code to test the property campaignId
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property collectionItemsDestinationUrlTemplate (base name: "collection_items_destination_url_template")', function() {
      // uncomment below and update the code to test the property collectionItemsDestinationUrlTemplate
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property createdTime (base name: "created_time")', function() {
      // uncomment below and update the code to test the property createdTime
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property rejectedReasons (base name: "rejected_reasons")', function() {
      // uncomment below and update the code to test the property rejectedReasons
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property rejectionLabels (base name: "rejection_labels")', function() {
      // uncomment below and update the code to test the property rejectionLabels
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property reviewStatus (base name: "review_status")', function() {
      // uncomment below and update the code to test the property reviewStatus
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property updatedTime (base name: "updated_time")', function() {
      // uncomment below and update the code to test the property updatedTime
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

    it('should have the property summaryStatus (base name: "summary_status")', function() {
      // uncomment below and update the code to test the property summaryStatus
      //var instance = new PinterestSdk.AdResponse();
      //expect(instance).to.be();
    });

  });

}));

/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
    instance = new PinterestRestApi.ItemAttributes();
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

  describe('ItemAttributes', function() {
    it('should create an instance of ItemAttributes', function() {
      // uncomment below and update the code to test ItemAttributes
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be.a(PinterestRestApi.ItemAttributes);
    });

    it('should have the property adLink (base name: "ad_link")', function() {
      // uncomment below and update the code to test the property adLink
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property additionalImageLink (base name: "additional_image_link")', function() {
      // uncomment below and update the code to test the property additionalImageLink
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property adult (base name: "adult")', function() {
      // uncomment below and update the code to test the property adult
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property ageGroup (base name: "age_group")', function() {
      // uncomment below and update the code to test the property ageGroup
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property availability (base name: "availability")', function() {
      // uncomment below and update the code to test the property availability
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property averageReviewRating (base name: "average_review_rating")', function() {
      // uncomment below and update the code to test the property averageReviewRating
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property brand (base name: "brand")', function() {
      // uncomment below and update the code to test the property brand
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property color (base name: "color")', function() {
      // uncomment below and update the code to test the property color
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property condition (base name: "condition")', function() {
      // uncomment below and update the code to test the property condition
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property customLabel0 (base name: "custom_label_0")', function() {
      // uncomment below and update the code to test the property customLabel0
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property customLabel1 (base name: "custom_label_1")', function() {
      // uncomment below and update the code to test the property customLabel1
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property customLabel2 (base name: "custom_label_2")', function() {
      // uncomment below and update the code to test the property customLabel2
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property customLabel3 (base name: "custom_label_3")', function() {
      // uncomment below and update the code to test the property customLabel3
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property customLabel4 (base name: "custom_label_4")', function() {
      // uncomment below and update the code to test the property customLabel4
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property description (base name: "description")', function() {
      // uncomment below and update the code to test the property description
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property freeShippingLabel (base name: "free_shipping_label")', function() {
      // uncomment below and update the code to test the property freeShippingLabel
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property freeShippingLimit (base name: "free_shipping_limit")', function() {
      // uncomment below and update the code to test the property freeShippingLimit
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property gender (base name: "gender")', function() {
      // uncomment below and update the code to test the property gender
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property googleProductCategory (base name: "google_product_category")', function() {
      // uncomment below and update the code to test the property googleProductCategory
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property gtin (base name: "gtin")', function() {
      // uncomment below and update the code to test the property gtin
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property imageLink (base name: "image_link")', function() {
      // uncomment below and update the code to test the property imageLink
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property itemGroupId (base name: "item_group_id")', function() {
      // uncomment below and update the code to test the property itemGroupId
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property lastUpdatedTime (base name: "last_updated_time")', function() {
      // uncomment below and update the code to test the property lastUpdatedTime
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property link (base name: "link")', function() {
      // uncomment below and update the code to test the property link
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property material (base name: "material")', function() {
      // uncomment below and update the code to test the property material
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property minAdPrice (base name: "min_ad_price")', function() {
      // uncomment below and update the code to test the property minAdPrice
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property mobileLink (base name: "mobile_link")', function() {
      // uncomment below and update the code to test the property mobileLink
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property mpn (base name: "mpn")', function() {
      // uncomment below and update the code to test the property mpn
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property numberOfRatings (base name: "number_of_ratings")', function() {
      // uncomment below and update the code to test the property numberOfRatings
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property numberOfReviews (base name: "number_of_reviews")', function() {
      // uncomment below and update the code to test the property numberOfReviews
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property pattern (base name: "pattern")', function() {
      // uncomment below and update the code to test the property pattern
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property price (base name: "price")', function() {
      // uncomment below and update the code to test the property price
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property productType (base name: "product_type")', function() {
      // uncomment below and update the code to test the property productType
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property salePrice (base name: "sale_price")', function() {
      // uncomment below and update the code to test the property salePrice
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property shipping (base name: "shipping")', function() {
      // uncomment below and update the code to test the property shipping
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property shippingHeight (base name: "shipping_height")', function() {
      // uncomment below and update the code to test the property shippingHeight
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property shippingWeight (base name: "shipping_weight")', function() {
      // uncomment below and update the code to test the property shippingWeight
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property shippingWidth (base name: "shipping_width")', function() {
      // uncomment below and update the code to test the property shippingWidth
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property size (base name: "size")', function() {
      // uncomment below and update the code to test the property size
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property sizeSystem (base name: "size_system")', function() {
      // uncomment below and update the code to test the property sizeSystem
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property sizeType (base name: "size_type")', function() {
      // uncomment below and update the code to test the property sizeType
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property tax (base name: "tax")', function() {
      // uncomment below and update the code to test the property tax
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

    it('should have the property title (base name: "title")', function() {
      // uncomment below and update the code to test the property title
      //var instance = new PinterestRestApi.ItemAttributes();
      //expect(instance).to.be();
    });

  });

}));

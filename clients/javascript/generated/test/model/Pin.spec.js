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
    instance = new PinterestSdk.Pin();
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

  describe('Pin', function() {
    it('should create an instance of Pin', function() {
      // uncomment below and update the code to test Pin
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be.a(PinterestSdk.Pin);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property createdAt (base name: "created_at")', function() {
      // uncomment below and update the code to test the property createdAt
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property link (base name: "link")', function() {
      // uncomment below and update the code to test the property link
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property title (base name: "title")', function() {
      // uncomment below and update the code to test the property title
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property description (base name: "description")', function() {
      // uncomment below and update the code to test the property description
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property altText (base name: "alt_text")', function() {
      // uncomment below and update the code to test the property altText
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property boardId (base name: "board_id")', function() {
      // uncomment below and update the code to test the property boardId
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property boardSectionId (base name: "board_section_id")', function() {
      // uncomment below and update the code to test the property boardSectionId
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property boardOwner (base name: "board_owner")', function() {
      // uncomment below and update the code to test the property boardOwner
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property media (base name: "media")', function() {
      // uncomment below and update the code to test the property media
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

    it('should have the property mediaSource (base name: "media_source")', function() {
      // uncomment below and update the code to test the property mediaSource
      //var instance = new PinterestSdk.Pin();
      //expect(instance).to.be();
    });

  });

}));

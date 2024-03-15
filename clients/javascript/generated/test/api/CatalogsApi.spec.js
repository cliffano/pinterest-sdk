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
    instance = new PinterestSdk.CatalogsApi();
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

  describe('CatalogsApi', function() {
    describe('catalogsList', function() {
      it('should call catalogsList successfully', function(done) {
        //uncomment below and update the code to test catalogsList
        //instance.catalogsList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('catalogsProductGroupPinsList', function() {
      it('should call catalogsProductGroupPinsList successfully', function(done) {
        //uncomment below and update the code to test catalogsProductGroupPinsList
        //instance.catalogsProductGroupPinsList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('catalogsProductGroupsCreate', function() {
      it('should call catalogsProductGroupsCreate successfully', function(done) {
        //uncomment below and update the code to test catalogsProductGroupsCreate
        //instance.catalogsProductGroupsCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('catalogsProductGroupsDelete', function() {
      it('should call catalogsProductGroupsDelete successfully', function(done) {
        //uncomment below and update the code to test catalogsProductGroupsDelete
        //instance.catalogsProductGroupsDelete(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('catalogsProductGroupsGet', function() {
      it('should call catalogsProductGroupsGet successfully', function(done) {
        //uncomment below and update the code to test catalogsProductGroupsGet
        //instance.catalogsProductGroupsGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('catalogsProductGroupsList', function() {
      it('should call catalogsProductGroupsList successfully', function(done) {
        //uncomment below and update the code to test catalogsProductGroupsList
        //instance.catalogsProductGroupsList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('catalogsProductGroupsProductCountsGet', function() {
      it('should call catalogsProductGroupsProductCountsGet successfully', function(done) {
        //uncomment below and update the code to test catalogsProductGroupsProductCountsGet
        //instance.catalogsProductGroupsProductCountsGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('catalogsProductGroupsUpdate', function() {
      it('should call catalogsProductGroupsUpdate successfully', function(done) {
        //uncomment below and update the code to test catalogsProductGroupsUpdate
        //instance.catalogsProductGroupsUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('feedProcessingResultsList', function() {
      it('should call feedProcessingResultsList successfully', function(done) {
        //uncomment below and update the code to test feedProcessingResultsList
        //instance.feedProcessingResultsList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('feedsCreate', function() {
      it('should call feedsCreate successfully', function(done) {
        //uncomment below and update the code to test feedsCreate
        //instance.feedsCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('feedsDelete', function() {
      it('should call feedsDelete successfully', function(done) {
        //uncomment below and update the code to test feedsDelete
        //instance.feedsDelete(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('feedsGet', function() {
      it('should call feedsGet successfully', function(done) {
        //uncomment below and update the code to test feedsGet
        //instance.feedsGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('feedsList', function() {
      it('should call feedsList successfully', function(done) {
        //uncomment below and update the code to test feedsList
        //instance.feedsList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('feedsUpdate', function() {
      it('should call feedsUpdate successfully', function(done) {
        //uncomment below and update the code to test feedsUpdate
        //instance.feedsUpdate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('itemsBatchGet', function() {
      it('should call itemsBatchGet successfully', function(done) {
        //uncomment below and update the code to test itemsBatchGet
        //instance.itemsBatchGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('itemsBatchPost', function() {
      it('should call itemsBatchPost successfully', function(done) {
        //uncomment below and update the code to test itemsBatchPost
        //instance.itemsBatchPost(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('itemsGet', function() {
      it('should call itemsGet successfully', function(done) {
        //uncomment below and update the code to test itemsGet
        //instance.itemsGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('itemsIssuesList', function() {
      it('should call itemsIssuesList successfully', function(done) {
        //uncomment below and update the code to test itemsIssuesList
        //instance.itemsIssuesList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('productsByProductGroupFilterList', function() {
      it('should call productsByProductGroupFilterList successfully', function(done) {
        //uncomment below and update the code to test productsByProductGroupFilterList
        //instance.productsByProductGroupFilterList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));

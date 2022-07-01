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

// CommonJS-like environments that support module.exports, like Node.
factory(require('expect.js'), require(process.cwd()+'/src/index'));

'use strict';

var instance;

beforeEach(function() {
  instance = new PinterestRestApi.MediaApi();
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

describe('MediaApi', function() {
    describe('mediaCreate', function() {
      it('should call mediaCreate successfully', function(done) {
        //uncomment below and update the code to test mediaCreate
        //instance.mediaCreate(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('mediaGet', function() {
      it('should call mediaGet successfully', function(done) {
        //uncomment below and update the code to test mediaGet
        //instance.mediaGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('mediaList', function() {
      it('should call mediaList successfully', function(done) {
        //uncomment below and update the code to test mediaList
        //instance.mediaList(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
});
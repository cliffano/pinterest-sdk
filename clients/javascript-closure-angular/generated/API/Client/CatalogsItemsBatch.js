goog.provide('API.Client.CatalogsItemsBatch');

/**
 * Object describing the catalogs items batch
 * @record
 */
API.Client.CatalogsItemsBatch = function() {}

/**
 * @type {!API.Client.CatalogsType}
 * @export
 */
API.Client.CatalogsItemsBatch.prototype.catalogType;

/**
 * Id of the catalogs items batch
 * @type {!string}
 * @export
 */
API.Client.CatalogsItemsBatch.prototype.batchId;

/**
 * Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD
 * @type {!Date}
 * @export
 */
API.Client.CatalogsItemsBatch.prototype.createdTime;

/**
 * Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD
 * @type {!Date}
 * @export
 */
API.Client.CatalogsItemsBatch.prototype.completedTime;

/**
 * @type {!API.Client.BatchOperationStatus}
 * @export
 */
API.Client.CatalogsItemsBatch.prototype.status;

/**
 * Array with the catalogs items processing records part of the catalogs items batch
 * @type {!Array<!API.Client.HotelProcessingRecord>}
 * @export
 */
API.Client.CatalogsItemsBatch.prototype.items;


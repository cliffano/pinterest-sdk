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

import ApiClient from '../ApiClient';
import CatalogsProductGroup from './CatalogsProductGroup';
import CatalogsProductGroupFilters from './CatalogsProductGroupFilters';
import CatalogsProductGroupStatus from './CatalogsProductGroupStatus';
import CatalogsProductGroupType from './CatalogsProductGroupType';
import CatalogsVerticalProductGroup from './CatalogsVerticalProductGroup';

/**
 * The CatalogsProductGroupsCreate201Response model module.
 * @module model/CatalogsProductGroupsCreate201Response
 * @version 1.1.1-pre.0
 */
class CatalogsProductGroupsCreate201Response {
    /**
     * Constructs a new <code>CatalogsProductGroupsCreate201Response</code>.
     * @alias module:model/CatalogsProductGroupsCreate201Response
     * @param {(module:model/CatalogsProductGroup|module:model/CatalogsVerticalProductGroup)} instance The actual instance to initialize CatalogsProductGroupsCreate201Response.
     */
    constructor(instance = null) {
        if (instance === null) {
            this.actualInstance = null;
            return;
        }
        var match = 0;
        var errorMessages = [];
        try {
            if (typeof instance === "CatalogsProductGroup") {
                this.actualInstance = instance;
            } else {
                // plain JS object
                // validate the object
                CatalogsProductGroup.validateJSON(instance); // throw an exception if no match
                // create CatalogsProductGroup from JS object
                this.actualInstance = CatalogsProductGroup.constructFromObject(instance);
            }
            match++;
        } catch(err) {
            // json data failed to deserialize into CatalogsProductGroup
            errorMessages.push("Failed to construct CatalogsProductGroup: " + err)
        }

        try {
            if (typeof instance === "CatalogsVerticalProductGroup") {
                this.actualInstance = instance;
            } else {
                // plain JS object
                // validate the object
                CatalogsVerticalProductGroup.validateJSON(instance); // throw an exception if no match
                // create CatalogsVerticalProductGroup from JS object
                this.actualInstance = CatalogsVerticalProductGroup.constructFromObject(instance);
            }
            match++;
        } catch(err) {
            // json data failed to deserialize into CatalogsVerticalProductGroup
            errorMessages.push("Failed to construct CatalogsVerticalProductGroup: " + err)
        }

        if (match > 1) {
            throw new Error("Multiple matches found constructing `CatalogsProductGroupsCreate201Response` with oneOf schemas CatalogsProductGroup, CatalogsVerticalProductGroup. Input: " + JSON.stringify(instance));
        } else if (match === 0) {
            this.actualInstance = null; // clear the actual instance in case there are multiple matches
            throw new Error("No match found constructing `CatalogsProductGroupsCreate201Response` with oneOf schemas CatalogsProductGroup, CatalogsVerticalProductGroup. Details: " +
                            errorMessages.join(", "));
        } else { // only 1 match
            // the input is valid
        }
    }

    /**
     * Constructs a <code>CatalogsProductGroupsCreate201Response</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsProductGroupsCreate201Response} obj Optional instance to populate.
     * @return {module:model/CatalogsProductGroupsCreate201Response} The populated <code>CatalogsProductGroupsCreate201Response</code> instance.
     */
    static constructFromObject(data, obj) {
        return new CatalogsProductGroupsCreate201Response(data);
    }

    /**
     * Gets the actual instance, which can be <code>CatalogsProductGroup</code>, <code>CatalogsVerticalProductGroup</code>.
     * @return {(module:model/CatalogsProductGroup|module:model/CatalogsVerticalProductGroup)} The actual instance.
     */
    getActualInstance() {
        return this.actualInstance;
    }

    /**
     * Sets the actual instance, which can be <code>CatalogsProductGroup</code>, <code>CatalogsVerticalProductGroup</code>.
     * @param {(module:model/CatalogsProductGroup|module:model/CatalogsVerticalProductGroup)} obj The actual instance.
     */
    setActualInstance(obj) {
       this.actualInstance = CatalogsProductGroupsCreate201Response.constructFromObject(obj).getActualInstance();
    }

    /**
     * Returns the JSON representation of the actual instance.
     * @return {string}
     */
    toJSON = function(){
        return this.getActualInstance();
    }

    /**
     * Create an instance of CatalogsProductGroupsCreate201Response from a JSON string.
     * @param {string} json_string JSON string.
     * @return {module:model/CatalogsProductGroupsCreate201Response} An instance of CatalogsProductGroupsCreate201Response.
     */
    static fromJSON = function(json_string){
        return CatalogsProductGroupsCreate201Response.constructFromObject(JSON.parse(json_string));
    }
}

/**
 * ID of the catalog product group.
 * @member {String} id
 */
CatalogsProductGroupsCreate201Response.prototype['id'] = undefined;

/**
 * Name of catalog product group
 * @member {String} name
 */
CatalogsProductGroupsCreate201Response.prototype['name'] = undefined;

/**
 * @member {String} description
 */
CatalogsProductGroupsCreate201Response.prototype['description'] = undefined;

/**
 * @member {module:model/CatalogsProductGroupFilters} filters
 */
CatalogsProductGroupsCreate201Response.prototype['filters'] = undefined;

/**
 * boolean indicator of whether the product group is being featured or not
 * @member {Boolean} is_featured
 */
CatalogsProductGroupsCreate201Response.prototype['is_featured'] = undefined;

/**
 * @member {module:model/CatalogsProductGroupType} type
 */
CatalogsProductGroupsCreate201Response.prototype['type'] = undefined;

/**
 * @member {module:model/CatalogsProductGroupStatus} status
 */
CatalogsProductGroupsCreate201Response.prototype['status'] = undefined;

/**
 * Unix timestamp in seconds of when catalog product group was created.
 * @member {Number} created_at
 */
CatalogsProductGroupsCreate201Response.prototype['created_at'] = undefined;

/**
 * Unix timestamp in seconds of last time catalog product group was updated.
 * @member {Number} updated_at
 */
CatalogsProductGroupsCreate201Response.prototype['updated_at'] = undefined;

/**
 * id of the catalogs feed belonging to this catalog product group
 * @member {String} feed_id
 */
CatalogsProductGroupsCreate201Response.prototype['feed_id'] = undefined;

/**
 * @member {module:model/CatalogsProductGroupsCreate201Response.CatalogTypeEnum} catalog_type
 */
CatalogsProductGroupsCreate201Response.prototype['catalog_type'] = undefined;


CatalogsProductGroupsCreate201Response.OneOf = ["CatalogsProductGroup", "CatalogsVerticalProductGroup"];

export default CatalogsProductGroupsCreate201Response;


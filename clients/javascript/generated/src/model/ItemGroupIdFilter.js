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

import ApiClient from '../ApiClient';
import CatalogsProductGroupMultipleStringCriteria from './CatalogsProductGroupMultipleStringCriteria';

/**
 * The ItemGroupIdFilter model module.
 * @module model/ItemGroupIdFilter
 * @version 1.0.1-pre.0
 */
class ItemGroupIdFilter {
    /**
     * Constructs a new <code>ItemGroupIdFilter</code>.
     * @alias module:model/ItemGroupIdFilter
     * @param ITEM_GROUP_ID {module:model/CatalogsProductGroupMultipleStringCriteria} 
     */
    constructor(ITEM_GROUP_ID) { 
        
        ItemGroupIdFilter.initialize(this, ITEM_GROUP_ID);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, ITEM_GROUP_ID) { 
        obj['ITEM_GROUP_ID'] = ITEM_GROUP_ID;
    }

    /**
     * Constructs a <code>ItemGroupIdFilter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ItemGroupIdFilter} obj Optional instance to populate.
     * @return {module:model/ItemGroupIdFilter} The populated <code>ItemGroupIdFilter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ItemGroupIdFilter();

            if (data.hasOwnProperty('ITEM_GROUP_ID')) {
                obj['ITEM_GROUP_ID'] = CatalogsProductGroupMultipleStringCriteria.constructFromObject(data['ITEM_GROUP_ID']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/CatalogsProductGroupMultipleStringCriteria} ITEM_GROUP_ID
 */
ItemGroupIdFilter.prototype['ITEM_GROUP_ID'] = undefined;






export default ItemGroupIdFilter;


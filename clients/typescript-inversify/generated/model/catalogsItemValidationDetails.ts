/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
import { NullableCatalogsItemFieldType } from './nullableCatalogsItemFieldType';


export interface CatalogsItemValidationDetails { 
    attribute_name: NullableCatalogsItemFieldType | null;
    /**
     * Provided value that caused the validation issue.
     */
    provided_value: string | null;
}
export namespace CatalogsItemValidationDetails {
}

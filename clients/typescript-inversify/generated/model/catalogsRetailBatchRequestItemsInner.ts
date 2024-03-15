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
import { CatalogsCreateRetailItem } from './catalogsCreateRetailItem';
import { CatalogsDeleteRetailItem } from './catalogsDeleteRetailItem';
import { CatalogsUpdateRetailItem } from './catalogsUpdateRetailItem';
import { CatalogsUpsertRetailItem } from './catalogsUpsertRetailItem';
import { ItemAttributes } from './itemAttributes';
import { UpdateMaskFieldType } from './updateMaskFieldType';


export interface CatalogsRetailBatchRequestItemsInner { 
    /**
     * The catalog item id in the merchant namespace
     */
    item_id: string;
    operation: CatalogsRetailBatchRequestItemsInner.OperationEnum;
    attributes: ItemAttributes;
    /**
     * The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.
     */
    update_mask?: Array<UpdateMaskFieldType> | null;
}
export namespace CatalogsRetailBatchRequestItemsInner {
    export type OperationEnum = 'CREATE' | 'UPDATE' | 'UPSERT' | 'DELETE';
    export const OperationEnum = {
        Create: 'CREATE' as OperationEnum,
        Update: 'UPDATE' as OperationEnum,
        Upsert: 'UPSERT' as OperationEnum,
        Delete: 'DELETE' as OperationEnum
    }
}

/*
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * Object describing the catalogs items batch
 */
public class OASCatalogsItemsBatch implements OASCatalogsRetailItemsBatch, OASCatalogsHotelItemsBatch, OAS.MappedProperties {
    /**
     * Get catalogType
     * @return catalogType
     */
    public OASCatalogsType catalogType { get; set; }

    /**
     * Id of the catalogs items batch
     * @return batchId
     */
    public String batchId { get; set; }

    /**
     * Time of the batch creation: YYYY-MM-DD\'T\'hh:mm:ssTZD
     * @return createdTime
     */
    public Datetime createdTime { get; private set; }

    /**
     * Time of the batch completion: YYYY-MM-DD\'T\'hh:mm:ssTZD
     * @return completedTime
     */
    public Datetime completedTime { get; private set; }

    /**
     * Get status
     * @return status
     */
    public OASBatchOperationStatus status { get; set; }

    /**
     * Array with the catalogs items processing records part of the catalogs items batch
     * @return items
     */
    public List<OASHotelProcessingRecord> items { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'catalog_type' => 'catalogType',
        'batch_id' => 'batchId',
        'created_time' => 'createdTime',
        'completed_time' => 'completedTime'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'catalog_type' => 'catalogType',
        'batch_id' => 'batchId',
        'created_time' => 'createdTime',
        'completed_time' => 'completedTime'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'catalog_type' => 'catalogType',
        'batch_id' => 'batchId',
        'created_time' => 'createdTime',
        'completed_time' => 'completedTime'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'catalog_type' => 'catalogType',
        'batch_id' => 'batchId',
        'created_time' => 'createdTime',
        'completed_time' => 'completedTime'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public OASCatalogsItemsBatch() {
        items = new List<OASHotelProcessingRecord>();
    }

    public static OASCatalogsItemsBatch getExample() {
        OASCatalogsItemsBatch catalogsItemsBatch = new OASCatalogsItemsBatch();
          catalogsItemsBatch.catalogType = OASCatalogsType.getExample();
          catalogsItemsBatch.batchId = '595953100599279259-66753b9bb65c46c49bd8503b27fecf9e';
          catalogsItemsBatch.createdTime = Datetime.newInstanceGmt(2020, 1, 1, 20, 10, 40);
          catalogsItemsBatch.completedTime = Datetime.newInstanceGmt(2022, 3, 10, 15, 37, 10);
          catalogsItemsBatch.status = OASBatchOperationStatus.getExample();
          catalogsItemsBatch.items = new List<OASHotelProcessingRecord>{OASHotelProcessingRecord.getExample()};
        return catalogsItemsBatch;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASCatalogsItemsBatch) {           
            OASCatalogsItemsBatch catalogsItemsBatch = (OASCatalogsItemsBatch) obj;
            return this.catalogType == catalogsItemsBatch.catalogType
                && this.batchId == catalogsItemsBatch.batchId
                && this.createdTime == catalogsItemsBatch.createdTime
                && this.completedTime == catalogsItemsBatch.completedTime
                && this.status == catalogsItemsBatch.status
                && this.items == catalogsItemsBatch.items;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (catalogType == null ? 0 : System.hashCode(catalogType));
        hashCode = (17 * hashCode) + (batchId == null ? 0 : System.hashCode(batchId));
        hashCode = (17 * hashCode) + (createdTime == null ? 0 : System.hashCode(createdTime));
        hashCode = (17 * hashCode) + (completedTime == null ? 0 : System.hashCode(completedTime));
        hashCode = (17 * hashCode) + (status == null ? 0 : System.hashCode(status));
        hashCode = (17 * hashCode) + (items == null ? 0 : System.hashCode(items));
        return hashCode;
    }
}

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
 * OASItemsBatchPostRequest
 */
public class OASItemsBatchPostRequest implements OASCatalogsVerticalBatchRequest, OASCatalogsItemsBatchRequest, OAS.MappedProperties {
    /**
     * Get catalogType
     * @return catalogType
     */
    public OASCatalogsType catalogType { get; set; }

    /**
     * Get country
     * @return country
     */
    public OASCountry country { get; set; }

    /**
     * Get language
     * @return language
     */
    public OASLanguage language { get; set; }

    /**
     * Array with catalogs items
     * @return items
     */
    public List<OASItemDeleteBatchRecord> items { get; set; }

    /**
     * Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
     * @return catalogId
     */
    public String catalogId { get; set; }

    /**
     * Get operation
     * @return operation
     */
    public OASBatchOperation operation { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'catalog_type' => 'catalogType',
        'catalog_id' => 'catalogId'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'catalog_type' => 'catalogType',
        'catalog_id' => 'catalogId'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public OASItemsBatchPostRequest() {
        items = new List<OASItemDeleteBatchRecord>();
    }

    public static OASItemsBatchPostRequest getExample() {
        OASItemsBatchPostRequest itemsBatchPostRequest = new OASItemsBatchPostRequest();
          itemsBatchPostRequest.catalogType = OASCatalogsType.getExample();
          itemsBatchPostRequest.country = OASCountry.getExample();
          itemsBatchPostRequest.language = OASLanguage.getExample();
          itemsBatchPostRequest.items = new List<OASItemDeleteBatchRecord>{OASItemDeleteBatchRecord.getExample()};
          itemsBatchPostRequest.catalogId = '2680059592705';
          itemsBatchPostRequest.operation = OASBatchOperation.getExample();
        return itemsBatchPostRequest;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASItemsBatchPostRequest) {           
            OASItemsBatchPostRequest itemsBatchPostRequest = (OASItemsBatchPostRequest) obj;
            return this.catalogType == itemsBatchPostRequest.catalogType
                && this.country == itemsBatchPostRequest.country
                && this.language == itemsBatchPostRequest.language
                && this.items == itemsBatchPostRequest.items
                && this.catalogId == itemsBatchPostRequest.catalogId
                && this.operation == itemsBatchPostRequest.operation;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (catalogType == null ? 0 : System.hashCode(catalogType));
        hashCode = (17 * hashCode) + (country == null ? 0 : System.hashCode(country));
        hashCode = (17 * hashCode) + (language == null ? 0 : System.hashCode(language));
        hashCode = (17 * hashCode) + (items == null ? 0 : System.hashCode(items));
        hashCode = (17 * hashCode) + (catalogId == null ? 0 : System.hashCode(catalogId));
        hashCode = (17 * hashCode) + (operation == null ? 0 : System.hashCode(operation));
        return hashCode;
    }
}

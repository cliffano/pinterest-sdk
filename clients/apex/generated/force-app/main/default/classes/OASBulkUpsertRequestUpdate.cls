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
 * Request for creation of entities in bulk.
 */
public class OASBulkUpsertRequestUpdate implements OAS.MappedProperties {
    /**
     * Get campaigns
     * @return campaigns
     */
    public List<OASCampaignUpdateRequest> campaigns { get; set; }

    /**
     * Get adGroups
     * @return adGroups
     */
    public List<OASAdGroupUpdateRequest> adGroups { get; set; }

    /**
     * Get ads
     * @return ads
     */
    public List<OASAdUpdateRequest> ads { get; set; }

    /**
     * Get productGroups
     * @return productGroups
     */
    public List<OASProductGroupPromotionUpdateReques> productGroups { get; set; }

    /**
     * Get keywords
     * @return keywords
     */
    public List<OASKeywordUpdate> keywords { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'ad_groups' => 'adGroups',
        'product_groups' => 'productGroups'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'ad_groups' => 'adGroups',
        'product_groups' => 'productGroups'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public OASBulkUpsertRequestUpdate() {
        campaigns = new List<OASCampaignUpdateRequest>();
        adGroups = new List<OASAdGroupUpdateRequest>();
        ads = new List<OASAdUpdateRequest>();
        productGroups = new List<OASProductGroupPromotionUpdateReques>();
        keywords = new List<OASKeywordUpdate>();
    }

    public static OASBulkUpsertRequestUpdate getExample() {
        OASBulkUpsertRequestUpdate bulkUpsertRequestUpdate = new OASBulkUpsertRequestUpdate();
          bulkUpsertRequestUpdate.campaigns = new List<OASCampaignUpdateRequest>{OASCampaignUpdateRequest.getExample()};
          bulkUpsertRequestUpdate.adGroups = new List<OASAdGroupUpdateRequest>{OASAdGroupUpdateRequest.getExample()};
          bulkUpsertRequestUpdate.ads = new List<OASAdUpdateRequest>{OASAdUpdateRequest.getExample()};
          bulkUpsertRequestUpdate.productGroups = new List<OASProductGroupPromotionUpdateReques>{OASProductGroupPromotionUpdateReques.getExample()};
          bulkUpsertRequestUpdate.keywords = new List<OASKeywordUpdate>{OASKeywordUpdate.getExample()};
        return bulkUpsertRequestUpdate;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASBulkUpsertRequestUpdate) {           
            OASBulkUpsertRequestUpdate bulkUpsertRequestUpdate = (OASBulkUpsertRequestUpdate) obj;
            return this.campaigns == bulkUpsertRequestUpdate.campaigns
                && this.adGroups == bulkUpsertRequestUpdate.adGroups
                && this.ads == bulkUpsertRequestUpdate.ads
                && this.productGroups == bulkUpsertRequestUpdate.productGroups
                && this.keywords == bulkUpsertRequestUpdate.keywords;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (campaigns == null ? 0 : System.hashCode(campaigns));
        hashCode = (17 * hashCode) + (adGroups == null ? 0 : System.hashCode(adGroups));
        hashCode = (17 * hashCode) + (ads == null ? 0 : System.hashCode(ads));
        hashCode = (17 * hashCode) + (productGroups == null ? 0 : System.hashCode(productGroups));
        hashCode = (17 * hashCode) + (keywords == null ? 0 : System.hashCode(keywords));
        return hashCode;
    }
}

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
 * OASSSIOInsertionOrderStatusResponse
 */
public class OASSSIOInsertionOrderStatusResponse implements OASSSIOInsertionOrderStatus, OAS.MappedProperties {
    /**
     * Salesforce order id
     * @return pinOrderId
     */
    public String pinOrderId { get; set; }

    /**
     * Salesforce insertion order status
     * @return status
     */
    public String status { get; set; }

    /**
     * Salesforce insertion order creation time
     * @return creationTime
     */
    public String creationTime { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'pin_order_id' => 'pinOrderId',
        'creation_time' => 'creationTime'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'pin_order_id' => 'pinOrderId',
        'creation_time' => 'creationTime'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASSSIOInsertionOrderStatusResponse getExample() {
        OASSSIOInsertionOrderStatusResponse ssIOInsertionOrderStatusResponse = new OASSSIOInsertionOrderStatusResponse();
          ssIOInsertionOrderStatusResponse.pinOrderId = '0Q01N0000015hekSAB';
          ssIOInsertionOrderStatusResponse.status = 'Approved';
          ssIOInsertionOrderStatusResponse.creationTime = '2017-06-21T23:11:11.000Z';
        return ssIOInsertionOrderStatusResponse;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASSSIOInsertionOrderStatusResponse) {           
            OASSSIOInsertionOrderStatusResponse ssIOInsertionOrderStatusResponse = (OASSSIOInsertionOrderStatusResponse) obj;
            return this.pinOrderId == ssIOInsertionOrderStatusResponse.pinOrderId
                && this.status == ssIOInsertionOrderStatusResponse.status
                && this.creationTime == ssIOInsertionOrderStatusResponse.creationTime;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (pinOrderId == null ? 0 : System.hashCode(pinOrderId));
        hashCode = (17 * hashCode) + (status == null ? 0 : System.hashCode(status));
        hashCode = (17 * hashCode) + (creationTime == null ? 0 : System.hashCode(creationTime));
        return hashCode;
    }
}

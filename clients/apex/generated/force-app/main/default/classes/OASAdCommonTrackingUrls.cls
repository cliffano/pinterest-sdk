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
 * OASAdCommonTrackingUrls
 */
public class OASAdCommonTrackingUrls implements OASTrackingUrls, OAS.MappedProperties {
    /**
     * Get impression
     * @return impression
     */
    public List<String> impression { get; set; }

    /**
     * Get click
     * @return click
     */
    public List<String> click { get; set; }

    /**
     * Get engagement
     * @return engagement
     */
    public List<String> engagement { get; set; }

    /**
     * Get buyableButton
     * @return buyableButton
     */
    public List<String> buyableButton { get; set; }

    /**
     * Get audienceVerification
     * @return audienceVerification
     */
    public List<String> audienceVerification { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'buyable_button' => 'buyableButton',
        'audience_verification' => 'audienceVerification'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'buyable_button' => 'buyableButton',
        'audience_verification' => 'audienceVerification'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public OASAdCommonTrackingUrls() {
        impression = new List<String>();
        click = new List<String>();
        engagement = new List<String>();
        buyableButton = new List<String>();
        audienceVerification = new List<String>();
    }

    public static OASAdCommonTrackingUrls getExample() {
        OASAdCommonTrackingUrls adCommonTrackingUrls = new OASAdCommonTrackingUrls();
          adCommonTrackingUrls.impression = new List<String>{''};
          adCommonTrackingUrls.click = new List<String>{''};
          adCommonTrackingUrls.engagement = new List<String>{''};
          adCommonTrackingUrls.buyableButton = new List<String>{''};
          adCommonTrackingUrls.audienceVerification = new List<String>{''};
        return adCommonTrackingUrls;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASAdCommonTrackingUrls) {           
            OASAdCommonTrackingUrls adCommonTrackingUrls = (OASAdCommonTrackingUrls) obj;
            return this.impression == adCommonTrackingUrls.impression
                && this.click == adCommonTrackingUrls.click
                && this.engagement == adCommonTrackingUrls.engagement
                && this.buyableButton == adCommonTrackingUrls.buyableButton
                && this.audienceVerification == adCommonTrackingUrls.audienceVerification;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (impression == null ? 0 : System.hashCode(impression));
        hashCode = (17 * hashCode) + (click == null ? 0 : System.hashCode(click));
        hashCode = (17 * hashCode) + (engagement == null ? 0 : System.hashCode(engagement));
        hashCode = (17 * hashCode) + (buyableButton == null ? 0 : System.hashCode(buyableButton));
        hashCode = (17 * hashCode) + (audienceVerification == null ? 0 : System.hashCode(audienceVerification));
        return hashCode;
    }
}

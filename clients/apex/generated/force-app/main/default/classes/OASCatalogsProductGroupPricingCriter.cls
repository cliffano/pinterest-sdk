/*
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASCatalogsProductGroupPricingCriter
 */
public class OASCatalogsProductGroupPricingCriter {
    /**
     * Get inclusion
     * @return inclusion
     */
    public Boolean inclusion { get; set; }

    /**
     * Get values
     * @return values
     */
    public Double values { get; set; }

    /**
     * Get negated
     * @return negated
     */
    public Boolean negated { get; set; }

    public static OASCatalogsProductGroupPricingCriter getExample() {
        OASCatalogsProductGroupPricingCriter catalogsProductGroupPricingCriteria = new OASCatalogsProductGroupPricingCriter();
          catalogsProductGroupPricingCriteria.inclusion = true;
          catalogsProductGroupPricingCriteria.values = 1.3579;
          catalogsProductGroupPricingCriteria.negated = true;
        return catalogsProductGroupPricingCriteria;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASCatalogsProductGroupPricingCriter) {           
            OASCatalogsProductGroupPricingCriter catalogsProductGroupPricingCriteria = (OASCatalogsProductGroupPricingCriter) obj;
            return this.inclusion == catalogsProductGroupPricingCriteria.inclusion
                && this.values == catalogsProductGroupPricingCriteria.values
                && this.negated == catalogsProductGroupPricingCriteria.negated;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (inclusion == null ? 0 : System.hashCode(inclusion));
        hashCode = (17 * hashCode) + (values == null ? 0 : System.hashCode(values));
        hashCode = (17 * hashCode) + (negated == null ? 0 : System.hashCode(negated));
        return hashCode;
    }
}

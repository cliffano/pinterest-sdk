/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsProductGroupType.h
 *
 * &lt;p&gt;Catalog product group type&lt;/p&gt; &lt;p&gt;MERCHANT_CREATED: Product groups created by merchants. &lt;br&gt;ALL_PRODUCTS: Consists of every product in your latest successful feed upload. &lt;br&gt;BEST_DEALS: Consists of products with the deepest drop in price. &lt;br&gt;PINNER_FAVORITES: Consists of products that are resonating most with people on Pinterest, based on engagement. &lt;br&gt;TOP_SELLERS: Consists of products with the highest conversion rate, if you have the conversion tag installed. &lt;br&gt;BACK_IN_STOCK: Consists of products that were previously out of stock and are now in stock. &lt;br&gt;NEW_ARRIVALS: Consists of products that are new to your Catalog. &lt;br&gt;SHOPIFY_COLLECTION: Product groups created based on Shopify Product Collections. &lt;br&gt;I2PC: Product groups created based on predicted product category.&lt;/p&gt;
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupType_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  CatalogsProductGroupType
    : public ModelBase
{
public:
    CatalogsProductGroupType();
    virtual ~CatalogsProductGroupType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eCatalogsProductGroupType
    {
        CatalogsProductGroupType_MERCHANT_CREATED,
        CatalogsProductGroupType_ALL_PRODUCTS,
        CatalogsProductGroupType_BEST_DEALS,
        CatalogsProductGroupType_PINNER_FAVORITES,
        CatalogsProductGroupType_TOP_SELLERS,
        CatalogsProductGroupType_BACK_IN_STOCK,
        CatalogsProductGroupType_NEW_ARRIVALS,
        CatalogsProductGroupType_SHOPIFY_COLLECTIONS,
        CatalogsProductGroupType_I2PC,
    };

    eCatalogsProductGroupType getValue() const;
    void setValue(eCatalogsProductGroupType const value);

    protected:
        eCatalogsProductGroupType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupType_H_ */

/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ItemResponse_anyOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ItemResponse_anyOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ItemResponse_anyOf_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsRetailItemResponse.h"
#include "CppRestOpenAPIClient/model/CatalogsHotelAttributes.h"
#include "CppRestOpenAPIClient/model/Pin.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CatalogsType.h"
#include <vector>
#include "CppRestOpenAPIClient/model/CatalogsHotelItemResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Pin;
class CatalogsHotelAttributes;

/// <summary>
/// 
/// </summary>
class  ItemResponse_anyOf
    : public ModelBase
{
public:
    ItemResponse_anyOf();
    virtual ~ItemResponse_anyOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ItemResponse_anyOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsType> getCatalogType() const;
    bool catalogTypeIsSet() const;
    void unsetCatalog_type();

    void setCatalogType(const std::shared_ptr<CatalogsType>& value);

    /// <summary>
    /// The catalog retail item id in the merchant namespace
    /// </summary>
    utility::string_t getItemId() const;
    bool itemIdIsSet() const;
    void unsetItem_id();

    void setItemId(const utility::string_t& value);

    /// <summary>
    /// The pins mapped to the item
    /// </summary>
    std::vector<std::shared_ptr<Pin>>& getPins();
    bool pinsIsSet() const;
    void unsetPins();

    void setPins(const std::vector<std::shared_ptr<Pin>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsHotelAttributes> getAttributes() const;
    bool attributesIsSet() const;
    void unsetAttributes();

    void setAttributes(const std::shared_ptr<CatalogsHotelAttributes>& value);

    /// <summary>
    /// The catalog hotel id in the merchant namespace
    /// </summary>
    utility::string_t getHotelId() const;
    bool hotelIdIsSet() const;
    void unsetHotel_id();

    void setHotelId(const utility::string_t& value);


protected:
    std::shared_ptr<CatalogsType> m_Catalog_type;
    bool m_Catalog_typeIsSet;
    utility::string_t m_Item_id;
    bool m_Item_idIsSet;
    std::vector<std::shared_ptr<Pin>> m_Pins;
    bool m_PinsIsSet;
    std::shared_ptr<CatalogsHotelAttributes> m_Attributes;
    bool m_AttributesIsSet;
    utility::string_t m_Hotel_id;
    bool m_Hotel_idIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ItemResponse_anyOf_H_ */

/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsFeedIngestionInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedIngestionInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedIngestionInfo_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CatalogsFeedIngestionInfo
    : public ModelBase
{
public:
    CatalogsFeedIngestionInfo();
    virtual ~CatalogsFeedIngestionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsFeedIngestionInfo members

    /// <summary>
    /// The number of ingested products that are in stock.
    /// </summary>
    int32_t getINSTOCK() const;
    bool iNSTOCKIsSet() const;
    void unsetIN_STOCK();

    void setINSTOCK(int32_t value);

    /// <summary>
    /// The number of ingested products that are in out of stock.
    /// </summary>
    int32_t getOUTOFSTOCK() const;
    bool oUTOFSTOCKIsSet() const;
    void unsetOUT_OF_STOCK();

    void setOUTOFSTOCK(int32_t value);

    /// <summary>
    /// The number of ingested products that are in preorder.
    /// </summary>
    int32_t getPREORDER() const;
    bool pREORDERIsSet() const;
    void unsetPREORDER();

    void setPREORDER(int32_t value);


protected:
    int32_t m_IN_STOCK;
    bool m_IN_STOCKIsSet;
    int32_t m_OUT_OF_STOCK;
    bool m_OUT_OF_STOCKIsSet;
    int32_t m_PREORDER;
    bool m_PREORDERIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedIngestionInfo_H_ */
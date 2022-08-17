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
 * RelatedTerms.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RelatedTerms_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RelatedTerms_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/RelatedTerms_related_terms_list_inner.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class RelatedTerms_related_terms_list_inner;

/// <summary>
/// 
/// </summary>
class  RelatedTerms
    : public ModelBase
{
public:
    RelatedTerms();
    virtual ~RelatedTerms();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RelatedTerms members

    /// <summary>
    /// First input term. For example, if you pass \&quot;?terms&#x3D;clothes,workout\&quot;, then id will be \&quot;clothes\&quot;
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Total number of related terms returned
    /// </summary>
    int32_t getRelatedTermCount() const;
    bool relatedTermCountIsSet() const;
    void unsetRelated_term_count();

    void setRelatedTermCount(int32_t value);

    /// <summary>
    /// The id of the advertiser.
    /// </summary>
    std::vector<std::shared_ptr<RelatedTerms_related_terms_list_inner>>& getRelatedTermsList();
    bool relatedTermsListIsSet() const;
    void unsetRelated_terms_list();

    void setRelatedTermsList(const std::vector<std::shared_ptr<RelatedTerms_related_terms_list_inner>>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    int32_t m_Related_term_count;
    bool m_Related_term_countIsSet;
    std::vector<std::shared_ptr<RelatedTerms_related_terms_list_inner>> m_Related_terms_list;
    bool m_Related_terms_listIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RelatedTerms_H_ */

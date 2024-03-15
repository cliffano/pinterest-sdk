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
 * TemplateResponse_date_range_absolute_date_range.h
 *
 * The absolute date range of the template
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TemplateResponse_date_range_absolute_date_range_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TemplateResponse_date_range_absolute_date_range_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// The absolute date range of the template
/// </summary>
class  TemplateResponse_date_range_absolute_date_range
    : public ModelBase
{
public:
    TemplateResponse_date_range_absolute_date_range();
    virtual ~TemplateResponse_date_range_absolute_date_range();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TemplateResponse_date_range_absolute_date_range members

    /// <summary>
    /// The date range type
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// The start date of the date range
    /// </summary>
    double getStartDate() const;
    bool startDateIsSet() const;
    void unsetStart_date();

    void setStartDate(double value);

    /// <summary>
    /// The end date of the date range
    /// </summary>
    double getEndDate() const;
    bool endDateIsSet() const;
    void unsetEnd_date();

    void setEndDate(double value);


protected:
    utility::string_t m_Type;
    bool m_TypeIsSet;
    double m_Start_date;
    bool m_Start_dateIsSet;
    double m_End_date;
    bool m_End_dateIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TemplateResponse_date_range_absolute_date_range_H_ */
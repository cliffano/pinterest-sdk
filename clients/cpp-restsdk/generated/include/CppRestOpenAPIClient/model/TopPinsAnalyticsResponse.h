/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TopPinsAnalyticsResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TopPinsAnalyticsResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TopPinsAnalyticsResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/TopPinsAnalyticsResponse_date_availability.h"
#include "CppRestOpenAPIClient/model/TopPinsAnalyticsResponse_pins_inner.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class TopPinsAnalyticsResponse_date_availability;
class TopPinsAnalyticsResponse_pins_inner;

/// <summary>
/// 
/// </summary>
class  TopPinsAnalyticsResponse
    : public ModelBase
{
public:
    TopPinsAnalyticsResponse();
    virtual ~TopPinsAnalyticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TopPinsAnalyticsResponse members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TopPinsAnalyticsResponse_date_availability> getDateAvailability() const;
    bool dateAvailabilityIsSet() const;
    void unsetDate_availability();

    void setDateAvailability(const std::shared_ptr<TopPinsAnalyticsResponse_date_availability>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<TopPinsAnalyticsResponse_pins_inner>>& getPins();
    bool pinsIsSet() const;
    void unsetPins();

    void setPins(const std::vector<std::shared_ptr<TopPinsAnalyticsResponse_pins_inner>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSortBy() const;
    bool sortByIsSet() const;
    void unsetSort_by();

    void setSortBy(const utility::string_t& value);


protected:
    std::shared_ptr<TopPinsAnalyticsResponse_date_availability> m_Date_availability;
    bool m_Date_availabilityIsSet;
    std::vector<std::shared_ptr<TopPinsAnalyticsResponse_pins_inner>> m_Pins;
    bool m_PinsIsSet;
    utility::string_t m_Sort_by;
    bool m_Sort_byIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TopPinsAnalyticsResponse_H_ */

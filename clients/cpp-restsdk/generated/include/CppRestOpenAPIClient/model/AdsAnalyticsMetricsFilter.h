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
 * AdsAnalyticsMetricsFilter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdsAnalyticsMetricsFilter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdsAnalyticsMetricsFilter_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/AdsAnalyticsFilterColumn.h"
#include "CppRestOpenAPIClient/model/AdsAnalyticsFilterOperator.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AdsAnalyticsMetricsFilter
    : public ModelBase
{
public:
    AdsAnalyticsMetricsFilter();
    virtual ~AdsAnalyticsMetricsFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdsAnalyticsMetricsFilter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdsAnalyticsFilterColumn> getField() const;
    bool fieldIsSet() const;
    void unsetField();

    void setField(const std::shared_ptr<AdsAnalyticsFilterColumn>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdsAnalyticsFilterOperator> getROperator() const;
    bool rOperatorIsSet() const;
    void unsetr_operator();

    void setROperator(const std::shared_ptr<AdsAnalyticsFilterOperator>& value);

    /// <summary>
    /// List of values for filtering
    /// </summary>
    std::vector<double>& getValues();
    bool valuesIsSet() const;
    void unsetValues();

    void setValues(std::vector<double> value);


protected:
    std::shared_ptr<AdsAnalyticsFilterColumn> m_Field;
    bool m_FieldIsSet;
    std::shared_ptr<AdsAnalyticsFilterOperator> m_r_operator;
    bool m_r_operatorIsSet;
    std::vector<double> m_Values;
    bool m_ValuesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdsAnalyticsMetricsFilter_H_ */

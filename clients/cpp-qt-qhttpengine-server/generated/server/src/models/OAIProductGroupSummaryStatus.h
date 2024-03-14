/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIProductGroupSummaryStatus.h
 *
 * Summary status for product group
 */

#ifndef OAIProductGroupSummaryStatus_H
#define OAIProductGroupSummaryStatus_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductGroupSummaryStatus : public OAIEnum {
public:
    OAIProductGroupSummaryStatus();
    OAIProductGroupSummaryStatus(QString json);
    ~OAIProductGroupSummaryStatus() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIProductGroupSummaryStatus {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        RUNNING, 
        PAUSED, 
        EXCLUDED, 
        ARCHIVED
    };
    OAIProductGroupSummaryStatus::eOAIProductGroupSummaryStatus getValue() const;
    void setValue(const OAIProductGroupSummaryStatus::eOAIProductGroupSummaryStatus& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIProductGroupSummaryStatus m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductGroupSummaryStatus)

#endif // OAIProductGroupSummaryStatus_H

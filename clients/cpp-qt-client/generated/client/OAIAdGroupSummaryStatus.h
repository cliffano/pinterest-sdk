/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAdGroupSummaryStatus.h
 *
 * Summary status for ad group
 */

#ifndef OAIAdGroupSummaryStatus_H
#define OAIAdGroupSummaryStatus_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdGroupSummaryStatus : public OAIEnum {
public:
    OAIAdGroupSummaryStatus();
    OAIAdGroupSummaryStatus(QString json);
    ~OAIAdGroupSummaryStatus() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIAdGroupSummaryStatus {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        RUNNING, 
        PAUSED, 
        NOT_STARTED, 
        COMPLETED, 
        ADVERTISER_DISABLED, 
        ARCHIVED
    };
    OAIAdGroupSummaryStatus::eOAIAdGroupSummaryStatus getValue() const;
    void setValue(const OAIAdGroupSummaryStatus::eOAIAdGroupSummaryStatus& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIAdGroupSummaryStatus m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdGroupSummaryStatus)

#endif // OAIAdGroupSummaryStatus_H

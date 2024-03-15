/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBookClosedResponse.h
 *
 * Creation fields
 */

#ifndef OAIBookClosedResponse_H
#define OAIBookClosedResponse_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBookClosedResponse : public OAIObject {
public:
    OAIBookClosedResponse();
    OAIBookClosedResponse(QString json);
    ~OAIBookClosedResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isConversionMetricsReady() const;
    void setConversionMetricsReady(const bool &conversion_metrics_ready);
    bool is_conversion_metrics_ready_Set() const;
    bool is_conversion_metrics_ready_Valid() const;

    bool isNonConversionMetricsReady() const;
    void setNonConversionMetricsReady(const bool &non_conversion_metrics_ready);
    bool is_non_conversion_metrics_ready_Set() const;
    bool is_non_conversion_metrics_ready_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool conversion_metrics_ready;
    bool m_conversion_metrics_ready_isSet;
    bool m_conversion_metrics_ready_isValid;

    bool non_conversion_metrics_ready;
    bool m_non_conversion_metrics_ready_isSet;
    bool m_non_conversion_metrics_ready_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBookClosedResponse)

#endif // OAIBookClosedResponse_H

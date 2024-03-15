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
 * OAIPins_analytics_metric_types_parameter_inner.h
 *
 * 
 */

#ifndef OAIPins_analytics_metric_types_parameter_inner_H
#define OAIPins_analytics_metric_types_parameter_inner_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPins_analytics_metric_types_parameter_inner : public OAIObject {
public:
    OAIPins_analytics_metric_types_parameter_inner();
    OAIPins_analytics_metric_types_parameter_inner(QString json);
    ~OAIPins_analytics_metric_types_parameter_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPins_analytics_metric_types_parameter_inner)

#endif // OAIPins_analytics_metric_types_parameter_inner_H

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
 * OAITargetingTypeFilter.h
 *
 * 
 */

#ifndef OAITargetingTypeFilter_H
#define OAITargetingTypeFilter_H

#include <QJsonObject>

#include "OAIAdsAnalyticsTargetingType.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITargetingTypeFilter : public OAIObject {
public:
    OAITargetingTypeFilter();
    OAITargetingTypeFilter(QString json);
    ~OAITargetingTypeFilter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAdsAnalyticsTargetingType> getTargetingTypes() const;
    void setTargetingTypes(const QList<OAIAdsAnalyticsTargetingType> &targeting_types);
    bool is_targeting_types_Set() const;
    bool is_targeting_types_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIAdsAnalyticsTargetingType> targeting_types;
    bool m_targeting_types_isSet;
    bool m_targeting_types_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITargetingTypeFilter)

#endif // OAITargetingTypeFilter_H

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
 * OAITargetingSpec_SHOPPING_RETARGETING.h
 *
 * 
 */

#ifndef OAITargetingSpec_SHOPPING_RETARGETING_H
#define OAITargetingSpec_SHOPPING_RETARGETING_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITargetingSpec_SHOPPING_RETARGETING : public OAIObject {
public:
    OAITargetingSpec_SHOPPING_RETARGETING();
    OAITargetingSpec_SHOPPING_RETARGETING(QString json);
    ~OAITargetingSpec_SHOPPING_RETARGETING() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getLookbackWindow() const;
    void setLookbackWindow(const qint32 &lookback_window);
    bool is_lookback_window_Set() const;
    bool is_lookback_window_Valid() const;

    QList<qint32> getTagTypes() const;
    void setTagTypes(const QList<qint32> &tag_types);
    bool is_tag_types_Set() const;
    bool is_tag_types_Valid() const;

    qint32 getExclusionWindow() const;
    void setExclusionWindow(const qint32 &exclusion_window);
    bool is_exclusion_window_Set() const;
    bool is_exclusion_window_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_lookback_window;
    bool m_lookback_window_isSet;
    bool m_lookback_window_isValid;

    QList<qint32> m_tag_types;
    bool m_tag_types_isSet;
    bool m_tag_types_isValid;

    qint32 m_exclusion_window;
    bool m_exclusion_window_isSet;
    bool m_exclusion_window_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITargetingSpec_SHOPPING_RETARGETING)

#endif // OAITargetingSpec_SHOPPING_RETARGETING_H

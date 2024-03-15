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
 * OAICustomLabel3Filter.h
 *
 * 
 */

#ifndef OAICustomLabel3Filter_H
#define OAICustomLabel3Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustomLabel3Filter : public OAIObject {
public:
    OAICustomLabel3Filter();
    OAICustomLabel3Filter(QString json);
    ~OAICustomLabel3Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringCriteria getCustomLabel3() const;
    void setCustomLabel3(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_3);
    bool is_custom_label_3_Set() const;
    bool is_custom_label_3_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringCriteria custom_label_3;
    bool m_custom_label_3_isSet;
    bool m_custom_label_3_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustomLabel3Filter)

#endif // OAICustomLabel3Filter_H
